#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    // Call flip_bits function with arguments 1024 and 1
    n = flip_bits(1024, 1);
    printf("%u\n", n);

    // Call flip_bits function with arguments 402 and 98
    n = flip_bits(402, 98);
    printf("%u\n", n);

    // Call flip_bits function with arguments 1024 and 3
    n = flip_bits(1024, 3);
    printf("%u\n", n);

    // Call flip_bits function with arguments 1024 and 1025
    n = flip_bits(1024, 1025);
    printf("%u\n", n);

    return (0);
}
