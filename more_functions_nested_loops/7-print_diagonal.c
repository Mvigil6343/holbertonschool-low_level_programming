#include "main.h"
/**
* print_diagonal - Prints a diagonal line
* @n: variable
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d;
		int b;

		for (d = 0; d < n; d++)
		{
			for (b = 0; b < d; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
