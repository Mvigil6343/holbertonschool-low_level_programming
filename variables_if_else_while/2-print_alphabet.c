#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	char counter = 0;

	for (counter = 97; counter <= 122; counter++)
		putchar(counter);
	putchar('\n');
	return (0);
}
