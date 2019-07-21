/*
	https://open.kattis.com/problems/mjehuric
*/
package main

import (
	"fmt"
  "strings"
  "bufio"
  "os"
)

func main() {
  scanner := bufio.NewScanner(os.Stdin)
  scanner.Scan()
  input := scanner.Text()

  var pieces = strings.Fields(input)
  var sorted = false
  for !sorted {
    var swp = false
    for i := 0; i < 4; i++ {
      var j = i+1
      pieces, swapped := checkAndSwap(pieces, i, j)
      if swapped {
        fmt.Printf("%v\n", strings.Join(pieces, " "))
        swp = true
      }
    }

    if !swp {
      sorted = true
    }
  }
}

func checkAndSwap(pieces []string, indexA int, indexB int) ([]string, bool) {
  var swapped = false
  if pieces[indexA] > pieces[indexB] {
    pieces[indexA], pieces[indexB] = pieces[indexB], pieces[indexA]
    swapped = true
  }
  return pieces, swapped
}
