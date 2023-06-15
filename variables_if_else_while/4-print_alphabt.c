#include <stdio.h>
/**
 * main - prints the alphabet unless e and q
 * Return: 0
 */
int main(void)
{
	char counter = 0;

	for (counter = 97; counter <= 122; counter++)
	{
		if (counter == 101 || counter == 113)
			counter++;
		putchar(counter);
	}
	putchar('\n');
	return (0);
}
