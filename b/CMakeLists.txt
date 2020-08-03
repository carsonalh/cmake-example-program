cmake_minimum_required (VERSION 3.8)
project (bar VERSION 0.1.0 LANGUAGES C)

find_package (foo REQUIRED)

add_executable (bar "bar.c")
target_link_libraries (bar PRIVATE foo)

