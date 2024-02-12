/**
 * get_endianness - function to determine the endianess of a system
 *
 * This function determines the endianess of the system by checking
 * the value of the least significant byte of an integer. If the least
 * significant byte is non-zero, the system is little-endian. Otherwise,
 * it is big-endian.
 *
 * Return: 1 if the system is little-endian, 0 if it is big-endian
 */
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
