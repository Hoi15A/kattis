#!/bin/node
/**
 * https://open.kattis.com/problems/cold
 */
const readline = require('readline')
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

var isFirstLine = true
rl.on('line', (line) => {
  if (isFirstLine) {
    isFirstLine = false
  } else {
    console.log(line.split('-').length - 1)
    return
  }
})
