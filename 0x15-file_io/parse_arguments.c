#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * parse_arguments - function that parses arguments in a file
 * @argc: the number of arguments
 * @argv: the character pointer array
 *
 * Return:always zero
 */

int parse_arguments(int argc, char *argv[])
{
	char *file_from = NULL;
	char *file_to = NULL;
	int opt;

	while ((opt = getopt(argc, argv, "f:t:")) != -1)
	{
		switch (opt)
		{
			case 'f':
				file_from = optarg;
				break;

			case 't':
				file_to = optarg;
				break;

			default: /* '?' */
				fprintf(stderr, "Usage: %s -f file_from -t file_to\n", argv[0]);
				exit(EXIT_FAILURE);
		}
	}

    // Check if both required options are provided
	if (file_from == NULL || file_to == NULL)
	{
		fprintf(stderr, "Usage: %s -f file_from -t file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}

    // Now you have 'file_from' and 'file_to' with the provided values
    // Perform further processing or return them as needed

	return 0;
}

/*
int main(int argc, char *argv[])
{
	if (argc != 5)
	{
		fprintf(stderr, "Usage: %s -f file_from -t file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	parse_arguments(argc, argv);

	// Rest of your code
	return 0;
}

*/
}
