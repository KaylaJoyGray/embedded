cmake_minimum_required(VERSION 3.30)

include(pico_sdk_import.cmake)

project(embedded CXX C ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${PROJECT_NAME} src/main.cpp
        src/morse.hpp
        src/morse.cpp
        src/io.hpp
        src/io.cpp)

target_link_libraries(${PROJECT_NAME}
        pico_stdlib              # for core functionality
        pico_cyw43_arch_none     # we need Wifi to access the GPIO, but we don't need anything else
)

pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)
pico_add_extra_outputs(embedded)
