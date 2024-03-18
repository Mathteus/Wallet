require('dotenv').config();
const express = require('express');
const path = require('path');
const app = express();
const System = require('./system.js');


app.use(express.static('public'));
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.post('/payments', async (req, res) => {
	console.log(req.body);
	const pagamentos = System.Payments.getPayments(req.body.id, req.body.date);
	res.send(pagamentos);
});

app.post('/login', async (req, res) => {
	const id = await System.Users.verifyLogin(req.body.user, req.body.pass);
	res.send(id);
});

app.get('/', (req, res) => {
  res.send(path.resolve(__dirname, '/public/index.html'));
})

app.listen(process.env.PORT, () => {
  console.log(`Example app listening on port http://192.168.1.112:${process.env.PORT}`)
})
