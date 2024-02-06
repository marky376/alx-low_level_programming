/**
 * string_nconcat - Concatenates two given strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from the second string.
 *
 * Return: A pointer to the newly allocated concatenated string
 * or NULL if the memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat;
	unsigned int i, j;

	/* Handling NULL strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculating the length of s1 and s2*/
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Determining the actual length of s2 to concatenate*/
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatened */
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	/* Copy s1 into the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	/* Copy the first n characters of s2 into the concatenated string */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i] = '\0';

	return (concat);
}
