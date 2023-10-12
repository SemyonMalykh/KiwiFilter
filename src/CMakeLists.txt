set (SRC
    mainFilter.cpp
)

add_executable(filter_main
    ${SRC}
)

target_link_libraries(filter_main
    PUBLIC
        kiwifilter
)

add_subdirectory(filter)