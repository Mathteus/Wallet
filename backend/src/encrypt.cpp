#include "encrypt.hpp"
#include "constants.hh"
#include "base64.hpp"
#include "utility.hpp"

std::string toMD5(const std::string& str) {
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

std::string CryptPass::createPassword(const std::string user_base64) {
  std::string user_and_password_str = Base64::decode(user_base64);
  const std::vector<std::string> users = Utils::split(user_and_password_str, ':');
  const std::string md5_password(toMD5(user));
  return bcrypt::generateHash(createStrongPassword(Constants::INIT_HASH + password));
}

bool CryptPass::verifyPassword(const std::string password, std::string hash) {
  return bcrypt::validatePassword(password, hash);
}
