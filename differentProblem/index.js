/*
  https://open.kattis.com/problems/different
*/

while (line = readline()) {
  var tmp = line.split(' ')
  var result = tmp[0] - tmp[1]
  if (result < 0) {
    print(result * -1)
  } else {
    print(result)
  }
}
