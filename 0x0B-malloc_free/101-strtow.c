#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string.
 */

int word_count(char *str)
{
	int count = 0;
	int in_word = 0;
	char word;
	int num_words;

	while (*str)
	{
		if (*str == ' ' || *str == '\n')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings, or NuULL on fail
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = word_count(str);

	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int i = 0;
	int in_word = 0;
	char *start = NULL;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word == 1)
			{
				in_word = 0;
				*str = '\0';
				words[i] = start;
				i++;
			}
		}
		else if (in_word == 0)
		{
			in_word = 1;
			start = str;
		}

		str++;
	}
	if (in_word == 1)
	{
		word[i] = start;
		i++;
	}
	word[i] = NULL;

	return (words);

}
