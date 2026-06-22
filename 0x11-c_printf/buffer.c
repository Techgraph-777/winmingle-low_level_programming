#include "main.h"

/**
 * flush_buffer - writes buffer to stdout
 * @buffer: character buffer
 * @index: current buffer index
 *
 * Return: number of chars written
 */
int flush_buffer(char buffer[], int index)
{
	write(1, buffer, index);
	return (0);
}
