﻿# CMakeList.txt : CMake project for Ant2, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Ant2 "Ant2.cpp" "Ant2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ant2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
