/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 *
 * Description: This function prints every other character of a given string,
 * starting with the first character.
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	// Calculate the length of the string
	while (*y != '\0')
	{
		y++;
		longi++;
	}

	t = longi - 1;

	// Print every other character
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}

	_putchar('\n');
}
