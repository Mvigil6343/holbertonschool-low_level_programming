#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	char counter = 0;
	char COUNTER = 0;

	for (counter = 97; counter <= 122; counter++)
		putchar(counter);
	for (COUNTER = 65; COUNTER <= 90; COUNTER++)
		putchar(COUNTER);
	putchar('\n');
	return (0);
}
