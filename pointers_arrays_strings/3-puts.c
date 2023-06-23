#include "main.h"
/**
 * _puts - prints a string
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int ps = 0;

	for (; str[ps] != '\0'; ps++)
		_putchar(str[ps]);
	_putchar('\n');
}
