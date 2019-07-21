/*
 * Simon Says
 *
 */

var line;
while (line = readline()) {
	
	var split = line.split('Simon says ')
	
	if (split.length === 2) {
		print(split[1])
	}

}


