#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function initializes an integer array 'a' of size 5 and a pointer 'p'.
 * It assigns the value 1024 to the element at index 2 of array 'a'.
 * It then assigns the memory address of variable 'n' to pointer 'p'.
 * Finally, it assigns the value 98 to the memory location pointed to by 'p'.
 * The value of the element at index 2 of array 'a' is printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*p = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
