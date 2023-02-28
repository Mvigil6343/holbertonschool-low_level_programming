#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints 2nd half of a string
 * @str: pointer of the string
 */

void puts_half(char *str)
{
	int len = _strlen(str), n = 0;

	if ((len % 2) == 0)
	{
		for (n = (len / 2); n <= len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = ((len / 2) - 1); n <= len; n++)
		{
		_putchar(str[n]);
		}
	}
	_putchar('\n');
}	
