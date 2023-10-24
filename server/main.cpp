#include <iostream>
#include <string>
#include <sqlite3.h>
#include <vector>

// using namespace std;

// int main() {
//   // Crie uma conexão com o banco de dados
//   sqlite3* db;
//   int rc = sqlite3_open("mydb.db", &db);
//   if (rc != SQLITE_OK) {
//     cerr << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(db) << endl;
//     return 1;
//   }

//   // Crie uma tabela
//   const char* sql = "CREATE TABLE users (id INTEGER PRIMARY KEY AUTOINCREMENT, name VARCHAR(255), email VARCHAR(255));";
//   rc = sqlite3_exec(db, sql, NULL, 0, NULL);
//   if (rc != SQLITE_OK) {
//     cerr << "Erro ao criar a tabela: " << sqlite3_errmsg(db) << endl;
//     return 1;
//   }

//   // Insira alguns dados
//   const char* data = "INSERT INTO users (name, email) VALUES ('John Doe', 'johndoe@example.com');";
//   rc = sqlite3_exec(db, data, NULL, 0, NULL);
//   if (rc != SQLITE_OK) {
//     cerr << "Erro ao inserir dados: " << sqlite3_errmsg(db) << endl;
//     return 1;
//   }

//   // Leia os dados
//   sql = "SELECT * FROM users;";
//   sqlite3_stmt* stmt;
//   rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
//   if (rc != SQLITE_OK) {
//     cerr << "Erro ao preparar a consulta: " << sqlite3_errmsg(db) << endl;
//     return 1;
//   }

//   while (sqlite3_step(stmt) == SQLITE_ROW) {
//     int id = sqlite3_column_int(stmt, 0);
//     const char* name = (const char*)sqlite3_column_text(stmt, 1);
//     const char* email = (const char*)sqlite3_column_text(stmt, 2);
//     cout << id << " " << name << " " << email << endl;
//   }

//   // Atualize um dado
//   data = "UPDATE users SET name = 'John Smith' WHERE id = 1;";
//   rc = sqlite3_exec(db, data, NULL, 0, NULL);
//   if (rc != SQLITE_OK) {
//     cerr << "Erro ao atualizar dados: " << sqlite3_errmsg(db) << endl;
//     return 1;
//   }

//   // Leia os dados novamente para verificar a atualização
//   sqlite3_reset(stmt);
//   while (sqlite3_step(stmt) == SQLITE_ROW) {
//     int id = sqlite3_column_int(stmt, 0);
//     const char* name = (const char*)sqlite3_column_text(stmt, 1);
//     const char* email = (const char*)sqlite3_column_text(stmt, 2);
//     cout << id << " " << name << " " << email << endl;
//   }

//   // Exclua um dado
//   data = "DELETE FROM users WHERE id = 1;";
//   rc = sqlite3_exec(db, data, NULL, 0, NULL);
//   if (rc != SQLITE_OK) {
//     cerr << "Erro ao excluir dados: " << sqlite3_errmsg(db) << endl;
//     return 1;
//   }

//   // Leia os dados novamente para verificar a exclusão
//   sqlite3_reset(stmt);
//   while (sqlite3_step(stmt) == SQLITE_ROW) {
//     int id = sqlite3_column_int(stmt, 0);
//     const char* name = (const char*)sqlite3_column_text(stmt, 1);
//     const char* email = (const char*)sqlite3_column_text(stmt, 2);
//     cout << id << " " << name << " " << email << endl;
//   }

//   // Feche a conexão
//   sqlite3_finalize(stmt);
//   sqlite3_close(db);

//   return 0;
// }

class Payments {
public:
  std::string name;
  std::string descrição;
  float valor;
  int ano;
  char mes;
  unsigned char dia;
};

class User {
public:
  std::string name;
  std::string pass;
  std::vector<Payments> transferecias;
};


int main (int argc, char** argv) {
  User mateus;
  mateus.name = "Matheus";
  mateus.pass = "spacejl02";

  mateus.transferecias.push_back({"SABESP", "Conta de água", 120, 2023, 10, 1});

  std::cout << "Nome: " << mateus.transferecias[0].name << '\n' <<
  "Descrição: " << mateus.transferecias[0].descrição << '\n' <<
  "Valor: " << mateus.transferecias[0].valor << '\n' <<
  "Data: " << mateus.transferecias[0].dia << '/' <<  '\n';


  return EXIT_SUCCESS;
} 