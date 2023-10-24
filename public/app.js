const utils = require('../server/utils.js')

utils.get("#logggin-btn").onclick = async () => {
  const response = await utils.verifyLogin(utils.get("#username").value, utils.get("#password").value);
  console.log(response);
};