﻿# CMakeList.txt : 顶级 CMake 项目文件，执行全局配置
# 和此处的包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("CppPrimer")
set(CMAKE_CXX_STANDARD 14)

# 包含子项目。
add_subdirectory ("CppPrimer")
add_subdirectory ("bookstore")
add_subdirectory ("test")
add_subdirectory ("textQuery")
add_subdirectory ("hasPtr")
add_subdirectory ("strVec")
