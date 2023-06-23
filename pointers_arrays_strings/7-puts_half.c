#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to print
 */
void puts_half(char *str)
{
	int len = 0, h = 0, ph = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		h = (len / 2);
	else
		h = ((len + 1) / 2);
	for (ph = h; ph < len; ph++)
		_putchar(str[ph]);
	_putchar('\n');
}
