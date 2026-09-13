cmake_minimum_required(VERSION 3.20)

project(oi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE TASK_FILES CONFIGURE_DEPENDS "*.cpp")

foreach(source IN LISTS TASK_FILES)
    file(RELATIVE_PATH relative "${CMAKE_CURRENT_SOURCE_DIR}" "${source}")

    string(REGEX REPLACE "\\.cpp$" "" target "${relative}")
    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" target "${target}")

    add_executable("${target}" "${source}"
            oi/2026-09-13/niemalejacy.cpp)
endforeach()
