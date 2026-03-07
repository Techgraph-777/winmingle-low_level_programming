#include <stdio.h>
#include <stdlib.h>

/** Prints lowercase alphabet followed by uppercase alphabet */

int main(void) {
    char x = 'a';

    /* Print lowercase letters */
    while (x <= 'z') {
	putchar(x);
	x++;
   } 
   /* Print uppercase letters */
    x = 'A';
    while (x <= 'Z') {
	putchar(x);
	x++;
   }

   putchar('\n');
   return (0);
}
