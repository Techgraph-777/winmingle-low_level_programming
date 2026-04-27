#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long a1 = 0, a2 = 1, b1 = 0, b2 = 2;
    unsigned long sum1, sum2;
    int i;

    printf("1, 2");

    for (i = 3; i <= 98; i++)
    {
         sum1 = a1 + b1;
	 sum2 = a2 + b2;

	 if (sum2 > 999999999)
	{
	     sum1 += sum2 / 1000000000;
	     sum2 %= 1000000000;
	}

	 printf(", %lu%09lu", sum1, sum2);

	 a1 = b1;
	 a2 = b2;
	 b1 = sum1;
	 b2 = sum2;
    }
    
    printf("\n");

    return (0);
}
