#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	for (; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
