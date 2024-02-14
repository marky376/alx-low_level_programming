/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return (_islower(c) || (_isupper(c) == c));
}

/**
 * _toupper - Converts a lowercase letter to uppercase
 * @c: The character to convert
 *
 * Return: The uppercase equivalent of c
 */
int _toupper(int c)
{
	return ((c >= 'a' && c <= 'z') ? (c - 'a' + 'A') : c);
}

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
