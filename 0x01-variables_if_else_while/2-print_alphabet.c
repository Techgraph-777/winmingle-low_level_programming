#include <stdio.h>
#include <stdlib.h>

/**Prints the alphabet in lowercase using putchar*/

int main(void) {
	char x = 'a';
	
	while (x <= 'z') {
	     putchar(x);
	     x++;
	}

	putchar('\n');
	return (0);
}
