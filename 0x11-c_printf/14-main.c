#include "main.h"

/**
 * main - tests %R
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%R\n", "Hello");
	_printf("%R\n", "abcdefghijklmnopqrstuvwxyz");
	_printf("%R\n", "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	_printf("%R\n", "Hello, World!");
	_printf("%R\n", NULL);

	return (0);
}
