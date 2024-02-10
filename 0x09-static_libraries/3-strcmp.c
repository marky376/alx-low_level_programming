/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Description:
 * This function compares two strings, character by character, until a
 * difference is found or the end of one of the strings is reached.
 *
 * Return:
 * - 0 if the strings are equal
 * - A positive value if the first differing character in s1 is greater than
 *   the corresponding character in s2
 * - A negative value if the first differing character in s1 is less than the
 *   corresponding character in s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
