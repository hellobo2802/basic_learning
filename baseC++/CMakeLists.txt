cmake_minimum_required(VERSION 3.24)
project(baseC++)

set(CMAKE_CXX_STANDARD 17)

add_executable(71-structCase2 lib/103-private.cpp)

# 遍历项目根目录下所有的 .cpp 文件
#[[
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()]]
