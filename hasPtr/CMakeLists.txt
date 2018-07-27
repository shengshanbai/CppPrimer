# CMakeList.txt: CppPrimer 的 CMake 项目，包括源和定义
# 此处特定于项目的逻辑。
#
cmake_minimum_required (VERSION 3.8)
file(GLOB srcFiles
    "*.h"
    "*.cpp"
    )
add_executable(hasPtr ${srcFiles})
# TODO: 如有需要，请添加测试并安装目标。
