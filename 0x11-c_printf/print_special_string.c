#include "main.h"

/**
 * print_special_string - prints string with special chars escaped
 * @str: string to print
 *
 * Return: number of chars printed
 */
int print_special_string(char *str)
{
	int i = 0, count = 0;
	char *hex = "0123456789ABCDEF";
	unsigned char c;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		c = str[i];

		if (c < 32 || c >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(hex[c / 16]);
			count += _putchar(hex[c % 16]);
		}
		else
		{
			count += _putchar(c);
		}

		i++;
	}

	return (count);
}
