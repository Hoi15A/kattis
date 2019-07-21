/**
 * https://open.kattis.com/problems/pervasiveheartmonitor
*/
const readline = require('readline')
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

const reg = new RegExp('[0-9]+\\.[0-9]+|[0-9]+', 'g')
rl.on('line', line => {
  let beats = line.match(reg)
  let name = line.replace(reg, '').trim()
  let total = 0
  for (var i = 0; i < beats.length; i++) {
    total += parseFloat(beats[i])
  }

  let avg = total/beats.length
  console.log(`${avg} ${name}`)
})
