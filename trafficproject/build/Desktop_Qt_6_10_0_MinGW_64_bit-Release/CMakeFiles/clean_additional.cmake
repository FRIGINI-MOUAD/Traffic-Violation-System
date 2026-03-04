# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\trafficproject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\trafficproject_autogen.dir\\ParseCache.txt"
  "trafficproject_autogen"
  )
endif()
