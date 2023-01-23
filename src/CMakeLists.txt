project(koi)

add_library(koigui gui.cpp)

target_include_directories(koigui
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)