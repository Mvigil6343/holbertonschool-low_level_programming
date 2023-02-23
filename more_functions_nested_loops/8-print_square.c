#include "main.h"
/**
 * print_square - Prints a square
 * @size: variable
 */
void print_square(int size)
{
	int x, z;

	for (x = 0; x < size; x++)
	{
		for (z = 0; z < size; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
