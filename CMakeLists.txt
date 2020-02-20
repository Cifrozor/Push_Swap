cmake_minimum_required(VERSION 3.15)
project(Push_S C)

set(CMAKE_C_STANDARD 99)

add_executable(Push_S checker.c push_swap.c push_swap.h checker.h)

cmake_minimum_required(VERSION 3.14)
project(push_swap C)

set(CMAKE_C_STANDARD 99)
include_directories(libftprintf libftprintf/includes libftprintf/srcs libftprintf/srcs/libft libftprintf/srcs/libft/includes)
link_directories(libftprintf)

add_executable(checker checker_main.c checker.h)
add_executable(push_swap push_swap.c push_swap.h)

target_link_libraries(push_swap libftprintf.a)
target_link_libraries(checker mlx libftprintf.a)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
target_link_libraries(checker ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})