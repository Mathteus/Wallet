#ifndef __UTILITYS_HPP__
#define __UTILITYS_HPP__

#include <string>
#include <vector>

namespace Utils {
  std::vector<std::string> split(std::string str, char slicer) {
    std::vector<std::string> items;
    size_t pos{0};
    while ((pos = str.find(slicer)) != std::string::npos) {
      std::string token = str.substr(0, pos);
      items.push_back(token);
      str.erase(0, pos + 1);
    }
    return items;
  }
};

#endif // __UTILITYS_HPP__