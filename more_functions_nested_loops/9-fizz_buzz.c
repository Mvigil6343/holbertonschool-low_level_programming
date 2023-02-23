#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int fb = 1;

	for (; fb <= 100; fb++)
	{
		if (fb % 3 == 0)
			printf("Fizz");
		if (fb % 5 == 0)
			printf("Buzz");
		if (fb % 3 != 0 && fb % 5 != 0)
			printf("%d", fb);
		if (fb < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
