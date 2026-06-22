#include "main.h"

/**
 * print_pointer_hex - helper for pointer printing
 * @n: number
 *
 * Return: chars printed
 */
int print_pointer_hex(unsigned long int n)
{
	char *hex = "0123456789abcdef";
	int count = 0;

	if (n / 16)
		count += print_pointer_hex(n / 16);

	count += _putchar(hex[n % 16]);

	return (count);
}

/**
 * print_pointer - prints pointer address
 * @ptr: pointer
 *
 * Return: chars printed
 */
int print_pointer(void *ptr)
{
	unsigned long int addr;
	int count = 0;

	if (ptr == NULL)
		return (print_string("(nil)"));

	addr = (unsigned long int)ptr;

	count += _putchar('0');
	count += _putchar('x');

	count += print_pointer_hex(addr);

	return (count);
}
