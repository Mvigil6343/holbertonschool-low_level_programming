#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 *
 * @str: string to print
 */
void puts2(char *str)
{
	int len = 0, oth = 0;

	while (str[len])
		len++;
	len--;
	while (oth <= len)
	{
		_putchar(str[oth]);
		oth += 2;
	}
	_putchar('\n');
}
