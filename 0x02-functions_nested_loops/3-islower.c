#include<stdio.h>
/**
 * @c : parameter to be checked
 * _islower : checks for lowercase letter
 * Return 1 if c is a lowercase ,0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
