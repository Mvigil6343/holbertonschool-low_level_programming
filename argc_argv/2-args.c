#include <stdio.h>
/**
 * main - Entry point
 * @argc: void
 * @argv: string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
