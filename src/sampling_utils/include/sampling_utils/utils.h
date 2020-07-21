
/**
 * Utility functions for sampling project
 * AUTHOR: Yang Zhang
 */

#pragma once

#include <ros/ros.h>

#include <string>

namespace sampling {
namespace utils {

template <typename T>
bool GetParam(const XmlRpc::XmlRpcValue &YamlNode,
              const std::string &param_name, T &data);

template <typename T>
bool GetParam(const XmlRpc::XmlRpcValue &YamlNode,
              const std::string &param_name, std::vector<T> &data);

}  // namespace utils
}  // namespace sampling
#include "utils_impl.h"