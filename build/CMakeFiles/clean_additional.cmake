# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\application_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\application_autogen.dir\\ParseCache.txt"
  "application_autogen"
  )
endif()
