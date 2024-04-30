#include "database.hpp"

sqlite3* DataBase::db;

bool DataBase::open(const char* name) {
	if (sqlite3_open(name, &DataBase::db) != SQLITE_OK) {
		std::cerr << "Error opening SQLite database\n";
		return true;
	} else {
		std::cout << "Banco de Dados " << name << " Aberto com succeso!\n"; 
		return false;
	}
}

void DataBase::close() {
	std::cout << "Banco de Dados Fechado!\n"; 
	sqlite3_close(DataBase::db);
}

bool DataBase::executeQuery(const char* sql) {
	char* errMsg;
	if (sqlite3_exec(DataBase::db, sql, nullptr, nullptr, &errMsg) != SQLITE_OK) {
		std::cerr << "SQL error: " << errMsg << std::endl;
		sqlite3_free(errMsg);
		return false;
	}

	return true;
}
std::vector<std::vector<std::string>> DataBase::executeSelect(const char* sql) {
	std::vector<std::vector<std::string>> result;
	sqlite3_stmt* stmt;
	if (sqlite3_prepare_v2(DataBase::db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
		std::cerr << "SQL error: " << sqlite3_errmsg(DataBase::db) << std::endl;
		return result;
	}

	while (sqlite3_step(stmt) == SQLITE_ROW) {
		const uint16_t columns = sqlite3_column_count(stmt);
		std::vector<std::string> row;
		for (int i = 0; i < columns; i++) {
			const unsigned char* val = sqlite3_column_text(stmt, i);
			if (val) row.push_back(reinterpret_cast<const char*>(val));
			else row.push_back("");
		}

		result.push_back(row);
	}

	sqlite3_finalize(stmt);
	return result;
}