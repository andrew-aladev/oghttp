set (SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR})

configure_file ("config.h.in" "${CMAKE_CURRENT_SOURCE_DIR}/config.h")

add_subdirectory ("processor")
