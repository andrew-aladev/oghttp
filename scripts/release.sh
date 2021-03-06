#!/usr/bin/env bash
set -e

DIR=$(dirname "${BASH_SOURCE[0]}")
cd "$DIR"

cd "../build"

# Packing binaries.

find . -depth \( -name "CMake*" -o -name "*.cmake" \) -exec rm -rf {} +

cmake ".." -DCMAKE_BUILD_TYPE="RELEASE"
make clean
make -j2 VERBOSE=1

CTEST_OUTPUT_ON_FAILURE=1 make test

make package

cd ".."

# Packing source.

VERSION=$(grep "OGH_VERSION" "CMakeLists.txt" | sed "s/.*OGH_VERSION\s*['\"]\([0-9.]*\).*/\1/g")
NAME="oghttp-${VERSION}"

COMPRESSION_LEVEL="-9"
TAR_COMMANDS=(
  "bzip2 $COMPRESSION_LEVEL"
  "gzip $COMPRESSION_LEVEL"
  "xz $COMPRESSION_LEVEL"
  "zip $COMPRESSION_LEVEL"
)
TAR_EXTENSIONS=(
  "tar.bz2"
  "tar.gz"
  "tar.xz"
  "zip"
)
CURRENT_BRANCH="$(git branch --show-current)"

for index in ${!TAR_COMMANDS[@]}; do
  git archive "$CURRENT_BRANCH" --format="tar" | \
    ${TAR_COMMANDS[$index]} > "build/${NAME}.${TAR_EXTENSIONS[$index]}"
done

git archive "$CURRENT_BRANCH" --format="zip" $COMPRESSION_LEVEL -o "build/${NAME}.zip"
