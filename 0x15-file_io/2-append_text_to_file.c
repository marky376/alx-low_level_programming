#include "main.h"

/**
 * append_text_to_file - function that appends text to the EOF
 * @filename: the name of the file
 * @text_content: the nul terminated string to append to the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fptr, fpot, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fptr = open(filename, O_WRONLY | O_APPEND);
	if (fptr == -1)
	{
		return (-1);
	}

	while (text_content[length])
	{
		length++;
	}

	fpot = write(fptr, text_content, length);
	close(fptr);

	if (fpot == -1)
	{
		return (-1);
	}

	return (1);
}

