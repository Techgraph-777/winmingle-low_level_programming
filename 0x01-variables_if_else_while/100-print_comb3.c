#include <stdio.h>
#include <stdlib.h>

/** Print all possible combination of two digit   */

int main(void) {

	int  x;
        int  y;

	
             for (x = 0; x <= 8; x++) {
	     for (y = x + 1; y <= 9; y++) {

		putchar(x + '0');
		putchar(y + '0');

		if (x != 8 || y != 9) {
			putchar(',');
			putchar(' ');

        	}
	}
    }
	putchar('\n');
	return (0);

}
