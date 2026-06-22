#include "main.h"

/**
 * main - Test the '-' flag
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("[%8d]\n", 98);
	_printf("[%-8d]\n", 98);

	_printf("[%10s]\n", "Win");
	_printf("[%-10s]\n", "Win");

	_printf("[%5c]\n", 'A');
	_printf("[%-5c]\n", 'A');

	_printf("[%-08d]\n", 98);

	return (0);
}
