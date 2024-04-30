#ifndef DATA_BASE_HPP
#define DATA_BASE_HPP

#include <iostream>
#include <sqlite3.h>
#include <vector>
class DataBase {
private:
  static sqlite3 *db;

public:
	static bool open(const char* name);

	static void close();

  static bool executeQuery(const char* sql);

  static std::vector<std::vector<std::string>> executeSelect(const char* sql);
};

#endif // DATA_BASE_HPP