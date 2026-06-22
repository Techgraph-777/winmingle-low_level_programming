#include "main.h"
#include <stdarg.h>

/**
 * print_reverse - prints a string in reverse
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_reverse(va_list args)
{
	char *str;
	int len, i;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	len = 0;
	while (str[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
