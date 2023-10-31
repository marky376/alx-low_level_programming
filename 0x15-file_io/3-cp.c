#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t bread, bwrite;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fptr_from, fptr_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fptr_from = open(file_from, O_RDONLY);
	if (fptr_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fptr_to = open(file_to, O_WRONLY | O_CREATE | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fptr_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		close(fptr_from);
		exit(99);
	}

	while ((bread = read(fptr_from, buffer, BUFFER_SIZE)) > 0)
	{
		bwrite = write(fptr_to, buffer, bread);

		if (bwrite == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", file_to);
			close(fptr_from);
			close(fptr_to);
			exit(99);
		}
	}

	if (bread == -1)
    	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fptr_from);
		close(fptr_to);
		exit(98);
	}

	if (close(fptr_from) == -1)
    	{
		dprintf(2, "Error: Can't close fd %d\n", fptr_from);
		exit(100);
	}

	if (close(fptr_to) == -1)
    	{
	dprintf(2, "Error: Can't close fd %d\n", fptr_to);
		exit(100);
	}

	return 0;
}

