#include "main.h"

/**
 * print_padding - prints spaces
 * @count: number of spaces
 *
 * Return: characters printed
 */
int print_padding(int count)
{
	int i;

	for (i = 0; i < count; i++)
		_putchar(' ');

	return (count);
}
