project(koi)

add_executable(koiapp main.cpp)

target_link_libraries(koiapp
    PRIVATE 
    koigui
)