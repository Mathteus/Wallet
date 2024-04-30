cmake_minimum_required(VERSION 3.25)
project(DataBaseServer)
set(CXX_STANDARD c++17)
find_package(Crow REQUIRED)
find_package(SQLite3 REQUIRED)

set(LIB_BCRYPT /usr/local/lib/libbcrypt.a)
set(SRC
	src/main.cpp
	src/database.cpp
	src/database.hpp
	src/encrypt.cpp
	src/encrypt.hpp
	src/constants.hh
	src/base64.hpp
	src/base64.cpp
	src/app.hpp
	src/app.cpp
)

# SQLite::SQLite3
# -static -static-libstdc++

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} Crow::Crow ${LIB_BCRYPT} -lsqlite3 -lcrypto)
