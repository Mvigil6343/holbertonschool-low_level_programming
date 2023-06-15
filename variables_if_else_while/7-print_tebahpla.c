#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char counter = 0;

	for (counter = 122; counter >= 97; counter--)
		putchar(counter);
	putchar('\n');
	return (0);
}
