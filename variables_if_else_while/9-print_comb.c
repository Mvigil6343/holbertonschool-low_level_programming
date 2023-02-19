#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int com;

	for (com = 10 ; com < 20 ; com++)
	{
		putchar((com % 10) + '0');

		if (com != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
