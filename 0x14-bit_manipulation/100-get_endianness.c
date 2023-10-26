#include "main.h"

/**
 * get_endianness - function to determine the endianess of a
 * system
 * Return: The endianess of the system
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *byting = (char *)&b;

	return (*byting != 0);
}
