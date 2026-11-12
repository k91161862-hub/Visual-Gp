# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/vgp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/vgp_autogen.dir/ParseCache.txt"
  "vgp_autogen"
  )
endif()
