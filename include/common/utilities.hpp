/*
      ____  ____
     /   /\/   /
    /___/  \  /   Copyright (c) 2021, Xilinx®.
    \   \   \/    Author: Víctor Mayoral Vilches <victorma@xilinx.com>
     \   \
     /   /
    /___/   /\
    \   \  /  \
     \___\/\___\

*/

#ifndef XILINX_VITIS_COMMON_INCLUDE_COMMON_UTILITIES_HPP_
#define XILINX_VITIS_COMMON_INCLUDE_COMMON_UTILITIES_HPP_

#include <string>
#include <vector>
#include "ros_opencl_120.hpp"

std::vector<cl::Device> get_xilinx_devices();
char* read_binary_file(const std::string &xclbin_file_name, unsigned &nb);

#endif  // XILINX_VITIS_COMMON_INCLUDE_COMMON_UTILITIES_HPP_
