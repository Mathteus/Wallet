#ifndef BCRYPT_HPP
#define BCRYPT_HPP

#include <bcrypt.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <openssl/md5.h>

namespace CryptPass {
  std::string createPassword(const std::string password);
  bool verifyPassword(const std::string password, std::string hash);
};

#endif