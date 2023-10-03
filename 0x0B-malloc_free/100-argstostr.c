#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that outputs arguments in a single string
 * @ac: concatenates integers
 * @av: concatenates chars
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	char *result;
	int current_pos = 0;
	int arg_length;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}

	result = malloc(total_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			arg_length = strlen(av[i]);
			strncpy(result + current_pos, av[i], arg_length);
			current_pos += arg_length;
			result[current_pos] = '\n';
			current_pos++;
		}
	}

	result[current_pos] = '\0';

	return (result);
}
