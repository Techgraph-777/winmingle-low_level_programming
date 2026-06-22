#include "main.h"
#include <stdarg.h>

/**
 * print_rot13 - prints a string encoded in ROT13
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_rot13(va_list args)
{
	char *str;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				_putchar(output[j]);
				break;
			}
		}

		if (input[j] == '\0')
			_putchar(str[i]);
	}

	return (i);
}
