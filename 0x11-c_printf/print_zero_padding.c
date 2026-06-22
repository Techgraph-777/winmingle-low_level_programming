#include "main.h"

/**
 * print_zero_padding - prints leading zeros
 * @count: number of zeros to print
 *
 * Return: number of characters printed
 */
int print_zero_padding(int count)
{
	int i;

	for (i = 0; i < count; i++)
		_putchar('0');

	return (count);
}
