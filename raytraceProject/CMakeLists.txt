﻿# CMakeList.txt : CMake project for raytraceProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (raytraceProject "raytraceProject.cpp" "raytraceProject.h" "vec3.h" "color.h" "ray.h")

# TODO: Add tests and install targets if needed.
