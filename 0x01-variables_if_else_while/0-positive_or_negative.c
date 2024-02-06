#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* 
 * main - Entry point of the program
 *
 * Description: This program generates a random number and determines if it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* Check if n is positive, negative, or zero */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	
	printf("\n");
	return (0);
}
