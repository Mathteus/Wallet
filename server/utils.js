const database = require("./db.js")

function get(element) {
  const name = element.splice(1, 99999);
  
  if (element[0] == '#') {
    return document.getElementById(name);
  } else if (element[0] == '.') {
    return document.getElementsByClassName(name);
  } else {
    return "ERROR TYPE";
  }
}

function createNode (tag, identifier="", contents="") {
  const element = document.createElement(tag);

  const name = identifier.splice(1, 99999);
  if (identifier[0] == '#') {
    element.id = name;
  } else if (identifier[0] == '.') {
    element.classList.add(name);
  }

  element.innerHTML = contents;
} 

function verifyPassword (users, password, username) {
  let verify = false;

  for (const user of users) {
    hash.on('readable', () => {
      const data = hash.read();
      if (data) {
        if ((data.toString('hex') == user.password) && (username == user.username)) {
          verify =  true;
        }  
      }
    });
    
    hash.write(password);
    hash.end();
  }

  return verify;
}

async function verifyLogin (username, password) {
  const DB = database.createDataBase();
  DB.begins();
  const response = await DB.getFromUsers();
  DB.close();
  return verifyPassword(response, password, username);
}

async function getPaymentFromDate (mounth, year) {
  database.createDataBase().begins();
  const exec = `SELECT * FROM payments WHERE date LIKE "%-${mounth}-${year}"`;
  const response = await database.createDataBase().getFromPayments(exec)
  database.createDataBase().close();
  return response;
}

async function createPayment (from, name, describe, value, date) {
  database.createDataBase().begins();
  const exec = `INSERT INTO payments (id, name, describe, value, date) VALUES ('${from}', '${name}', '${describe}', ${value}, '${date}')`;
  const response = await database.createDataBase().getFromPayments(exec)
  database.createDataBase().close();
  return response;
}

function formmatToUpdate (what, updated) {
  let up = ""; 
  for (let a=0; a<what.length; a++) {
  	up += `${what[a]}=${updated[a]}`;
    if (a < (what.length - 1)) up += ", ";
  }

  return up;
}

async function updatePayment (from, what, updated) {
  database.createDataBase().begins();
  const exec = `UPDATE payments SET ${formmatToUpdate(what, updated)} WHERE id='${from}'`;
  const response = await database.createDataBase().getFromPayments(exec)
  database.createDataBase().close();
  return response;
}

async function removePayment (from, name, date) {
  database.createDataBase().begins();
  const exec = `DELETE FROM payments WHERE id='${from}', name='${name}', date='${date}' `;
  const response = await database.createDataBase().getFromPayments(exec)
  database.createDataBase().close();
  return response;
}

module.exports = { get, createNode, verifyLogin, getPaymentFromDate, createPayment, updatePayment };