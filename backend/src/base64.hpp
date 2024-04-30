#ifndef BASE64_HPP
#define BASE64_HPP

#include <vector>
#include <string>
typedef unsigned char BYTE;

namespace Base64 {
  std::string encode(BYTE const* buf, unsigned int bufLen);
  std::vector<BYTE> decode(std::string const&);
};

#endif