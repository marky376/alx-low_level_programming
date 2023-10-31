#include "main.h"
/**
 * error_handler - function that manages the error experienced
 * @exit_code: the exit number if error occurs
 * @message: the error message to be output to the user
 */
void error_handler(int exit_code, const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(exit_code);
}

