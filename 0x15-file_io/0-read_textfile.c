#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to thePOSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: if NULL, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fptr;
	ssize_t bread, bwrite;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
	{
		free(buffer);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(fptr);
		return (0);
	}

	bread = read(fptr, buffer, letters);
	close(fptr);

	if (bread == -1)
	{
		free(buffer);
		close(fptr);
		return (0);
	}

	bwrite = write(STDOUT_FILENO, buffer, bread);
	if (bwrite == -1 || bwrite != bread)
	{
		close(fptr);
		return (0);
	}

	free(buffer);
	close(fptr);

	return (bread);
}
