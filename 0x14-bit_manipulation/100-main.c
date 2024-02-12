/**
 * main - Entry point of the program
 *
 * Description: This function determines the endianness of the system
 * by calling the get_endianness() function. If the system is little endian,
 * it prints "Little Endian", otherwise it prints "Big Endian".
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
