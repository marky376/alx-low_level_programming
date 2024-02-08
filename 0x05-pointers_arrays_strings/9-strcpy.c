/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	// Calculate the length of the source string
	while (*(src + l) != '\0')
	{
		l++;
	}

	// Copy each character from source to destination
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}

	// Add null terminator to the destination string
	dest[l] = '\0';

	return dest;
}
