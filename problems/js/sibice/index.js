/**
 * https://open.kattis.com/problems/sibice
*/
const readline = require('readline')
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

let first = true
let diag = 0
rl.on('line', line => {
  if (first) {
    first = false
    line = line.split(' ')
    let w = line[1]
    let h = line[2]
    diag = Math.sqrt(w*w + h*h)
    return
  }

  if (parseInt(line) <= diag) {
    console.log('DA')
  } else {
    console.log('NE')
  }
})
