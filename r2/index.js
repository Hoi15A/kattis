/*
 * (R1+R2)/2 = S
 * 
 * Goal: Find R2 using only R1 and S
 *
 */

var line;
while (line = readline()) {
	
	var tmp = line.split(' ')
	var r1 = tmp[0]
	var s = tmp[1]

	print((s*2)-r1)

}


