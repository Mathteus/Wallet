#ifndef APP_HPP
#define APP_HPP

#include <vector>
#include <iostream>
#include <string>
#include <crow.h>
#include "base64.hpp"
#include "encrypt.hpp"
#include "database.hpp"

class APP {
private:
  bool veryify_login(std::string user);

public:
  APP();
  ~APP();

  static void run();
};

#endif