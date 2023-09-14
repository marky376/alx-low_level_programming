#include<stdio.h>
#include "main.h"
/**
 * positive_or_negative - to check if a number is negative or not
 * @i: function parameter
 * Return: if positive or negative or otherwise
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

}
