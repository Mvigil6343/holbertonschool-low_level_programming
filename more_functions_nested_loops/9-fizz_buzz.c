#include <stdio.h>
/**
 * main - Entry point
 *
 * return: always 0
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
		printf(" ");
	}
	return (0);
}
