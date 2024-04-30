#include "encrypt.hpp"
#include "constants.hh"

std::string createStrongPassword(const std::string& str) {
  unsigned char hash[MD5_DIGEST_LENGTH];
  MD5_CTX md5;
  MD5_Init(&md5);
  MD5_Update(&md5, str.c_str(), str.size());
  MD5_Final(hash, &md5);

  std::stringstream ss;
  for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
    ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>( hash[i] );
  }

  return ss.str();
}

std::string CryptPass::createPassword(const std::string password) {
  return bcrypt::generateHash(createStrongPassword(Constants::INIT_HASH + password + Constants::END_HASH));
}

bool CryptPass::verifyPassword(const std::string password, std::string hash) {
  return bcrypt::validatePassword(password, hash);
}
