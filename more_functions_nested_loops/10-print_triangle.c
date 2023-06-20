#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int space, pad;

	if (size <= 0)
		_putchar('\n');
	else
		for (space = 1; space <= size; space++)
		{
			for (pad = 1; pad <= size - space; pad++)
				_putchar(' ');
			for (pad = 1; pad <= space; pad++)
				_putchar('#');
			_putchar('\n');
		}
}
