#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
