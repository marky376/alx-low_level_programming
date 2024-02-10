/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Description:
 * This function calculates the length of a string by iterating through
 * each character until it reaches the null terminator ('\0').
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
