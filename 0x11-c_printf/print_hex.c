#include "main.h"

/**
 * print_hex - prints hexadecimal number
 * @n: number to print
 * @uppercase: 1 for uppercase, 0 for lowercase
 *
 * Return: number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	char *hex_low = "0123456789abcdef";
	char *hex_up = "0123456789ABCDEF";
	char *hex;
	int count = 0;

	hex = uppercase ? hex_up : hex_low;

	if (n / 16)
		count += print_hex(n / 16, uppercase);

	count += _putchar(hex[n % 16]);

	return (count);
}
