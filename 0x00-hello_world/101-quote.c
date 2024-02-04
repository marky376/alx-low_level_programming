#include <unistd.h>

/**
 * echo_err - send text to standard error (stderr)
 *
 * @s: string to be sent to stderr
 *
 * Return: number of characters sent to stderr
 */
int echo_err(const char *s);

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	// Call echo_err function with the specified string
	echo_err("and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	return (1);
}

/**
 * echo_err - send text to standard error (stderr)
 *
 * @s: string to be sent to stderr
 *
 * Return: number of characters sent to stderr
 */
int echo_err(const char *s)
{
	int i = 0;

	// Iterate through each character of the string
	for (; *s; s++)
		i += write(2, s, 1);

	// Write a newline character to stderr
	write(2, "\n", 1);

	return (i);
}
