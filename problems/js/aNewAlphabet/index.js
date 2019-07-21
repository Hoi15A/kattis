/*
  https://open.kattis.com/problems/anewalphabet
*/

const alph = {
  'a': '@',
  'b': '8',
  'c': '(',
  'd': '|)',
  'e': '3',
  'f': '#',
  'g': '6',
  'h': '[-]',
  'i': '|',
  'j': '_|',
  'k': '|<',
  'l': '1',
  'm': '[]\\/[]',
  'n': '[]\\[]',
  'o': '0',
  'p': '|D',
  'q': '(,)',
  'r': '|Z',
  's': '$',
  't': '\'][\'',
  'u': '|_|',
  'v': '\\/',
  'w': '\\/\\/',
  'x': '}{',
  'y': '`/',
  'z': '2'
}

const input = readline().toLowerCase()
const split = input.split('')

var translated = ''
split.map(s => {
  var cont = true
  for (var a in alph) {
    if (a === s) {
      translated += alph[a]
      cont = false
    }
  }
  if (cont) {
    translated += s
  }
})

print(translated)
