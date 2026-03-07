#include <stdio.h>
#include <stdlib.h>

/**Prints the alphabet in lowercase except q and e*/

int main(void) {
	char x = 'a';
	
	while (x <= 'z') {
	     if (x != 'e' && x != 'q') {
		putchar(x);
	     }
	     x++;
	}

	putchar('\n');
	return (0);
}
