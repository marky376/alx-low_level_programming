/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * This function takes a pointer to a string and returns the length of the string.
 * It iterates through the string until it reaches the null character ('\0') and
 * counts the number of characters encountered.
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
