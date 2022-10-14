cmake_minimum_required(VERSION 3.10)
project(1st-2nd_chapter C)

set(CMAKE_C_STANDARD 99)

# - 编译多个 main 函数的方法(即: 编译不同的 C 文件的方法):
#   + 添加多个 add_executable() 方法，需要运行的文件去掉注释，不需要运行的添加注释便可。

# add_executable(1st-2nd_chapter 1.8.7.c)
add_executable(1st-2nd_chapter 2.6.1.c)