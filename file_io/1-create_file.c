#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: the name of the file to create.
 *@text_content: the content of the file to create.
 *Return: 1 if success or -1 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	int result;
	int length = 0;

	if (filename == NULL)
		return (-1);
	result = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (result == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = write(result, text_content, strlen(text_content));
		close(result);
		if (length == -1)
			return (-1);
	}
	else
		close(result);
	return (1);
}
