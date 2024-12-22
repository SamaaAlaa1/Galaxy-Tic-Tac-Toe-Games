# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "Board_Games_autogen"
  "CMakeFiles\\Board_Games_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Board_Games_autogen.dir\\ParseCache.txt"
  )
endif()
