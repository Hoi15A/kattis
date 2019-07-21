/*
  https://open.kattis.com/problems/quickbrownfox

  Goal: Detect pangrams (sentences with at least all 26 alphabetical chars)

  Output:
    "pangram" if a pangram
    "missing {letters}" if not a pangram and list all missing letters sorted alphabetically
*/

const alph = ['a','b','c','d','e','f','g','h','i','j','k',
'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

var firstLine = true
while (line = readline()) {
  if (firstLine) {
    firstLine = false
    continue
  }
  line = line.toLowerCase()

  var missing = ''

  alph.map(a => {
    if (line.indexOf(a) === -1) {
      missing += a
    }
  })

  if (missing.length === 0) {
    print('pangram')
    //console.log('pangram')
  } else {
    print('missing ' + missing)
    //console.log('missing ' + missing)
  }
}
