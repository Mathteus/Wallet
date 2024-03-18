const sqlite3 = require('sqlite3').verbose();
const { v4: uuidv4 } = require('uuid');
const crypto = require('crypto');
const path = require('path');
require('dotenv').config();

class Hash {
	static Encrypt (string) {
		const hash = crypto.createHash('sha256');
		hash.update(`START{${string}}END`);
		return hash.digest('hex');
	}
}

class DataBase {
	db = null;

	static Begins () {
	  return new Promise((resolve, reject) => {
	  	console.log("OPEN DB=", path.resolve(__dirname, process.env.PATH_DB));
  		this.dbPath = path.resolve(__dirname, process.env.PATH_DB);
			this.db = new sqlite3.Database(this.dbPath, (err) => {
			  (err) ? reject('Erro ao abrir o banco de dados:', err.message) : resolve('Conectado ao banco de dados com sucesso!');
			});
	  });
	}

	static get (table) {
		return new Promise((resolve, reject) => {
			this.db.all(`SELECT * FROM ${table}`, (err, rows) => {
			  if (err) console.error('Erro ao executar a consulta:', err.message);
			  resolve(rows);
			});
		});
	}

	static search (table, query) {
		return new Promise((resolve, reject) => {
			this.db.all(`SELECT * FROM ${table} WHERE ${query}`, (err, rows) => {
				(err) ? reject('Erro ao executar a consulta:', err.message) : resolve(rows);
			});
		});
	}

	static set (table, fileds, mask, dados) {
		return new Promise((resolve, reject) => {
			this.db.run(`INSERT INTO ${table} (${fileds}) VALUES (${maks})`, dados, (err) => {
			  (err) ? reject('Erro ao inserir dados:', err.message) : resolve('Dados inseridos com sucesso!');
			})
		});;
	}
};

class Users {
	static async addUsers (name, pass) {
		const datas = [name, Hash.Encrypt(pass), uuidv4()];
		await DataBase.set('users', 'name, pass, id', '?, ?, ?', datas)
		.then(msg => console.log(msg))
		.catch(error => console.error(error));
	}

	static async verifyLogin (name, pass) {
		const passHash = Hash.Encrypt(pass);
		let id = null; 
		await DataBase.search('users', `name="${name}" and pass="${passHash}"`)
		.then(msg => id = msg)
		.catch(error => id = "usuario ou senha erradas!");
		return id[0].id ? id[0].id : id; 
	}
};

class Payments {
	static async addPayment(id, date, name, type, value) {
		await DataBase.set('payments', 'id, date, name, type, value', '?, ?, ?, ?, ?', [id, date, name, type, value])
		.then(msg => console.log(msg))
		.catch(error => console.error(error));
	}

	static async getPayments(id, date) {
		let response = null;
		await DataBase.search('payments', `id="${id}" and date="${date}"`)
		.then(data => response = data)
		.catch(error => response = "Pagamentos Não encontrados!");
		return response;
	}
}

// async function connectDataBase () {
	// await DataBase.Begins()
	// .then(msg => console.log(msg))
	// .catch(error => console.error(error));
	// 
	// await DataBase.get('users')
	// .then(users => console.log(users))
	// .catch(error => console.error(error));
// 
	// await DataBase.get('payments')
	// .then(users => console.log(users))
	// .catch(error => console.error(error));
// 
	// const id = await Users.verifyLogin("Adriele", 123);
	// const pagamento = await Payments.getPayments(id, "2024-03-17");
	// console.log(pagamento);
// }
// 
// connectDataBase();

async function startDatabase () {
	await DataBase.Begins()
	.then(msg => console.log(msg))
	.catch(error => console.error(error));
}

module.exports = { Users, Payments, startDatabase };
