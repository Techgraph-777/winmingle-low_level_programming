#include <stdio.h>
#include <stdlib.h>

/**Prints the alphabet in lowercase using putchar*/

int main(void) {
	int x = 0;
	
	while (x <= 10) {
	     putchar(48 + x);
	     x++;
	}

	putchar('\n');
	return (0);
}
