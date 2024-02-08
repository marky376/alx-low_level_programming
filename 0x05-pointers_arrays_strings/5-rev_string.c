/**
 * rev_string - Reverses a string
 * @s: Input string
 *
 * Description:
 * This function takes a string as input and reverses it in place.
 * It swaps the characters from the beginning and end of the string
 * until the middle is reached, effectively reversing the string.
 *
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	// Find the length of the string
	while (s[counter] != '\0')
		counter++;

	// Swap characters from the beginning and end of the string
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
