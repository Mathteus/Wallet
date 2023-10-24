#ifndef BANCO_DADOS_HPP
#define BANCO_DADOS_HPP

#include <iostream>
#include <string>
#include <sqlite3.h>
#include <uuid/uuid.h>

// Função de callback para listar registros
int callback(void *data, int argc, char **argv, char **azColName) {
  for (int i = 0; i < argc; i++) {
    std::cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << std::endl;
  }
  
  return 0;
}

class Pagamento {
public:
  std::string m_id;
  std::string m_name;
  unsigned int m_valor;
  unsigned char m_mes;
  unsigned int m_ano;
  bool m_tipo;

public:
  Pagamento(std::string id, std::string name, unsigned int valor, unsigned char mes, unsigned int ano, bool tipo) : m_id(id), m_name(name), m_valor(valor), m_mes(mes), m_ano(ano), m_tipo(tipo) {}
};


class Users {
private:
  std::string m_id;
  std::string m_name;
  std::vector<Pagamento> m_transferecias;

public:
  Users(std::string name) : m_name(name) {
    m_id = BancoDados::createID();
  }


  void addTransferencia(std::string name, unsigned int valor, unsigned char mes, unsigned int ano, bool tipo) {
    std::string id_pay = BancoDados::createID();
    m_transferecias.push_back({id_pay, name, valor, mes, ano, tipo});
  }

  void addPagamento(std::string name, unsigned int valor, unsigned char mes, unsigned int ano) {
    addTransferencia(name, valor, mes, ano, true);
  }

  void addDespesas(std::string name, unsigned int valor, unsigned char mes, unsigned int ano) {
    addTransferencia(name, valor, mes, ano, false);
  }

  void deleteTransferencia () {

  }

  void deletePagamento() {

  }
};

class BancoDados {
private:
  sqlite3* m_data_base;
  sqlite3_stmt* m_stmt;

public:
	bool create_data_base(std::string name); 
  bool create_tables(std::string name, std::string parameters);
  bool insert(std::string name, std::string parameters);
  bool select(std::string name, std::string parameters);
  bool update(std::string name, std::string parameters);
  bool del(std::string name, std::string parameters);
  static std::string createID();
  void close();
};

#endif
