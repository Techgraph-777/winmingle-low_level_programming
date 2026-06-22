#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'd' || format[i] == 'i')
				count += print_number(va_arg(args, int));

			else if (format[i] == 'u')
				count += print_unsigned(va_arg(args, unsigned int));

			else if (format[i] == 'b')
				count += print_binary(va_arg(args, unsigned int));

			else if (format[i] == 'o')
				count += print_octal(va_arg(args, unsigned int));

			else if (format[i] == 'x')
				count += print_hex(va_arg(args, unsigned int), 0);

			else if (format[i] == 'X')
				count += print_hex(va_arg(args, unsigned int), 1);

			else if (format[i] == '%')
				count += _putchar('%');

			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}

		i++;
	}

	va_end(args);

	return (count);
}
