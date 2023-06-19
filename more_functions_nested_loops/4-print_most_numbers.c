#include "main.h"
/**
 * print_most_numbers - prints some numbers, read the code
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
