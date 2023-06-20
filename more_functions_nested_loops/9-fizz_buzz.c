#include <stdio.h>
/**
 * main - fizz buzz function
 * Return: Always 0 (success)
 */
int main(void)
{
	int fb;

	for (fb = 1; fb <= 100; fb++)
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
