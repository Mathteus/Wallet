#include <vector>
#include "banco_dados.hpp"


bool BancoDados::create_data_base(std::string name) {
	name += ".db";
  int result = sqlite3_open(name.c_str(), &this->m_data_base);
  if (result != SQLITE_OK) {
    std::cerr << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(this->m_data_base) << std::endl;
    return true;
  }

  std::string sql("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY AUTOINCREMENT, nome TEXT NOT NULL, idade INTEGER);");
  int result = sqlite3_exec(this->m_data_base, sql.c_str(), NULL, 0, NULL);
  if (result != SQLITE_OK) {
    std::cerr << "Erro ao criar a tabela: " << sqlite3_errmsg(this->m_data_base) << std::endl;
    return true;
  }

  return false;
}

std::string BancoDados::createID() {
  uuid_t m_uuid;
  uuid_generate(m_uuid);
  char uuid_str[37];
  uuid_unparse_lower(m_uuid, uuid_str);
  return std::string(uuid_str);
}

bool BancoDados::insert(std::string name, std::string parameters) {
	std::string exec("INSERT INTO " + name + " " + parameters + ';');
  int result = sqlite3_exec(this->m_data_base, exec.c_str(), NULL, 0, NULL);
  if (result != SQLITE_OK) {
    std::cerr << "Erro ao inserir dados: " << sqlite3_errmsg(this->m_data_base) << std::endl;
    return true;
  }

	return false;
}

bool BancoDados::select(std::string name, std::string parameters) {
  std::string sql("SELECT " + parameters + " FROM " + name +';');

  int result = sqlite3_prepare_v2(this->m_data_base, sql.c_str(), -1, &this->m_stmt, NULL);
  if (result != SQLITE_OK) {
    std::cerr << "Erro ao preparar a consulta: " << sqlite3_errmsg(this->m_data_base) << std::endl;
    return 1;
  }

  while (sqlite3_step(this->m_stmt) == SQLITE_ROW) {
    int id = sqlite3_column_int(m_stmt, 0);
    const char* name = (const char*)sqlite3_column_text(this->m_stmt, 1);
    const char* email = (const char*)sqlite3_column_text(this->m_stmt, 2);
    std::cout << id << " " << name << " " << email << std::endl;
  }
}

void BancoDados::close () {
  sqlite3_finalize(this->m_stmt);
  sqlite3_close(this->m_data_base);
}

// typedef struct Pagamento {
//   unsigned int valor;
//   const char* mes;
//   char ano[4];
//   const char* nome;
//   bool tipo;
// } Pagamento;

// typedef struct Users {
//   const char* id;
//   const char* nome;
//   Pagamento* transferencias;
// } Users;

int main() {
  // Crie uma conexão com o banco de dados
  // sqlite3* db;
  // Users matheus;

  // Atualize um dado
  // data = "UPDATE users SET name = 'John Smith' WHERE id = 1;";
  // rc = sqlite3_exec(db, data, NULL, 0, NULL);
  // if (rc != SQLITE_OK) {
  //   cerr << "Erro ao atualizar dados: " << sqlite3_errmsg(db) << endl;
  //   return 1;
  // }

  // // Leia os dados novamente para verificar a atualização
  // sqlite3_reset(stmt);
  // while (sqlite3_step(stmt) == SQLITE_ROW) {
  //   int id = sqlite3_column_int(stmt, 0);
  //   const char* name = (const char*)sqlite3_column_text(stmt, 1);
  //   const char* email = (const char*)sqlite3_column_text(stmt, 2);
  //   cout << id << " " << name << " " << email << endl;
  // }

  // // Exclua um dado
  // data = "DELETE FROM users WHERE id = 1;";
  // rc = sqlite3_exec(db, data, NULL, 0, NULL);
  // if (rc != SQLITE_OK) {
  //   cerr << "Erro ao excluir dados: " << sqlite3_errmsg(db) << endl;
  //   return 1;
  // }

  // // Leia os dados novamente para verificar a exclusão
  // sqlite3_reset(stmt);
  // while (sqlite3_step(stmt) == SQLITE_ROW) {
  //   int id = sqlite3_column_int(stmt, 0);
  //   const char* name = (const char*)sqlite3_column_text(stmt, 1);
  //   const char* email = (const char*)sqlite3_column_text(stmt, 2);
  //   cout << id << " " << name << " " << email << endl;
  // }



  return 0;
}