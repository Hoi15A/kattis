/*
	https://open.kattis.com/problems/timeloop
*/
package main

import (
	"fmt"
)

func main() {
	var input int
	fmt.Scanln(&input)
	for index := 0; index < input; index++ {
		fmt.Printf("%v Abracadabra\n", index+1)
	}
}
