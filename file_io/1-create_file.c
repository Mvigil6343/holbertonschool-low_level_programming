#include "main.h"

/**
 *create_file - creates file
 *@filename: char
 *@text_content: char
 *Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
	length = write(file, text_content, strlen(text_content));

	close(file);

		if (length == -1)
		return (-1);
	}
	else
	{
		close(file);
	}

	return (1);

}
