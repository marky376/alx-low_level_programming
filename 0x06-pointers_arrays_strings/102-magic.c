#include <stdio.h>

/**
 * main - function main
 * Return:always 0
 */


int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;/** Assign 98 to the memory location pointed to by p*/

	*p = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
