#include "main.h"

/**
 * create_file - function that creates a file with certain permissions
 * @filename: name of the file
 * @text_content: A null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fptr, fpot;
	mode_t mode = S_IRUSR | S_IWUSR;/*Permissions for read and write*/

	if (filename == NULL)
	{
		return (-1);
	}

	fptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fptr == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fpot = write(fptr, text_content, strlen(text_content));
		if (fpot == -1)
		{
			close(fptr);
			return (-1);
		}
	}

	close(fptr);
	return (1);
}
