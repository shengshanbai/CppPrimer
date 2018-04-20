# CMakeList.txt: CppPrimer 的 CMake 项目，包括源和定义
# 此处特定于项目的逻辑。
#
cmake_minimum_required (VERSION 3.8)

file( GLOB APP_SOURCES *.cpp )
foreach( testsourcefile ${APP_SOURCES} )
    # I used a simple string replace, to cut off .cpp.
    get_filename_component(testname ${testsourcefile} NAME_WE)
    add_executable( ${testname} ${testsourcefile} )
endforeach( testsourcefile ${APP_SOURCES} )

# TODO: 如有需要，请添加测试并安装目标。
