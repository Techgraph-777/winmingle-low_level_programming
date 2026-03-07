#include <stdio.h>
#include <stdlib.h>

/**Prints all single-digit numbers of base 10 starting from 0*/

int main(void) {
	char x = '0';
	
	while (x <= '9') {
	     putchar(x);
	     x++;
	}

	putchar('\n');
	return (0);
}
