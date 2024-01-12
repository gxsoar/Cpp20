include_directories(ch2/include/)
find_package(fmt)

set(SOURCES src/example/raw_literal_string)
set(SOURCES src/example/string_view)
set(SOURCES src/example/string_format)

add_executable(raw_literal_string ${SOURCES})
add_executable(string_view ${SOURCES})
add_executable(string_format ${SOURCES})

target_link_libraries(string_view PRIVATE fmt::fmt)
target_link_libraries(string_view PRIVATE fmt::fmt)