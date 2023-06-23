#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int rv = 0, len = 0;

	while (s[len])
		len++;
	for (rv = len; rv >= 0; rv--)
		_putchar(s[rv]);
	_putchar('\n');
}
