cmake_minimum_required (VERSION 3.8)
project (foo VERSION 0.1.0 LANGUAGES C)

add_library (foo STATIC "foo.h" "foo.c")
target_include_directories (foo PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)

install (TARGETS foo EXPORT foo
        DESTINATION lib
)
install (EXPORT foo
        DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/foo"
)
install (FILES "foo.h"
        DESTINATION include
)

