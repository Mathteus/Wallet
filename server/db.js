const sqlite3 = require('sqlite3').verbose();

function createDataBase() {
  function begins () {
    this.db = new sqlite3.Database('../login.db', sqlite3.OPEN_READWRITE, (err) => {
      if (err) {
        console.error(err.message);
      }
    });
  }
  
  async function getFromUsers (funcaoResponse) {
    return new Promise((resolve, reject) => {
      let response = [];
    
      this.db.serialize(() => {
        this.db.each(`SELECT * from users`, (err, row) => {
          if (err) {
            console.error(err.message);
          }
          // console.log(row.username + "\t" + row.password);
  
          response.push({
            username: row.username,
            password: row.password,
          });
  
          resolve(response);
        });
      });
    });
  } 

  function getFromPayments (exec, funcaoResponse) {
    return new Promise((resolve, reject) => {
      let response;

      this.db.serialize(() => {
        this.db.each(exec, (err, row) => {
          if (err) {
            console.error(err.message);
          }
  
          response.push({
            id: row.id,
            name: row.name,
            describe: row.describe,
            value: row.value,
            date: row.date,
          })
        });
  
        resolve((response));
      });
    });
  }
  
  function close () {
    this.db.close((err) => {
      if (err) {
        console.error(err.message);
      }
    });
  }

  return {
    begins,
    getFromPayments,
    getFromUsers,
    close,
  };
}

module.exports = { createDataBase };
