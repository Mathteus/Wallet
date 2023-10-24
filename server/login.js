const database = require("./db.js");
const crypto = require('crypto');
const hash = crypto.createHash('sha256');

async function verifyLogin (username, password) {
  const DB = database.createDataBase();
  DB.begins();
  let test = false;

  const response = await DB.getFromUsers();

  for (const user of response) {
    hash.on('readable', () => {
      const data = hash.read();
      if (data) {
        if ((data.toString('hex') == user.password) && (username == user.username)) {
          test =  true;
        }  
      }
    });
    
    hash.write(password);
    hash.end();
  }

  return test;
}

module.exports = { verifyLogin };