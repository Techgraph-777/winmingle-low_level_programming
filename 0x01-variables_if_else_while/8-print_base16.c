#include <stdio.h>
#include <stdlib.h>

/** Prints all hexadecimal numbers in lowercase  */

int main(void) {
    int n = 0;
    char x = 'a';

    while (n <= 9){
    putchar(n + '0');
    n++;
    }

    while (x <= 'f') {
    putchar(x);
    x++;
    }

    putchar('\n');
    return (0);
    }

