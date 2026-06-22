#include "main.h"
#include <stdio.h>

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "Hello");
	printf("String:[%s]\n", "Hello");

	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
