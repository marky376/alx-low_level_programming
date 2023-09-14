#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c : function parameter
 * Return: 1 on successful 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
