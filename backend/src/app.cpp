#include "app.hpp"


APP::APP() {
  DataBase::open("wallet.db");
  crow::SimpleApp app;
  // crow::App aplication2;

  CROW_ROUTE(app, "/hello").methods(crow::HTTPMethod::Get) ([]() {
    return "Hello world"; 
  });

  CROW_ROUTE(app, "/login").methods(crow::HTTPMethod::Get) ([](const crow::request &req, crow::response &res) {
    auto auth = req.get_header_value("Authorization");
    if (auth != "Basic TWF0aGV1cy5IZW5yaXF1ZToxMjM=") {
      res.code = 401;
      res.end();
      return;
    }

    res.code = 200;
    res.end("Login successful"); 
  });

  //   // Endpoint to handle POST requests to set data
  //   CROW_ROUTE(app, "/setData").methods(crow::HTTPMethod::Post) ([](const crow::request &req, crow::response &res) {
  //       auto json = crow::json::load(req.body);
  //       if (!json) {
  //         res.code = 400;
  //         res.end("Invalid JSON format");
  //         return;
  //       }

  //       datas.push_back(json["Data"].s());
  //       res.code = 200;
  //       res.end("Data added successfully"); });

  //   CROW_ROUTE(app, "/getData").methods(crow::HTTPMethod::Get) ([](const crow::request &, crow::response &res) {
  //       crow::json::wvalue json;
  //       json["datas"] = datas;
  //       res.code = 200; // OK
  //       res.set_header("Content-Type", "application/json");
  //       res.write(crow::json::dump(json));
  //       res.end(); });
  app.port(8080).multithreaded().run();
}

void APP::run() {

}

APP::~APP() {
  DataBase::close();
}

bool APP::veryify_login(std::string user) {
  Base64::decode(user);
}