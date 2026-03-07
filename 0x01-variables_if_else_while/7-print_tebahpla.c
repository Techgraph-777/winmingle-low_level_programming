#include <stdio.h>
#include <stdlib.h>

/**Prints the lowercase alphabet in reverse order*/

int main(void) {
	char x = 'z';
	
	while (x >= 'a') {
	     putchar(x);
	     x--;
	}

	putchar('\n');
	return (0);
}
