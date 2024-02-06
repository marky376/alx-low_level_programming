#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
    char i  = 'a'; // Initialize variable i with the value 'a'

    while (i <= 'z') // Loop through the alphabet from 'a' to 'z'
    {
        putchar(i); // Print the current character
        i++; // Increment i to move to the next character
    }

    putchar('\n'); // Print a new line after printing the alphabet

    return 0; // Return 0 to indicate successful execution
}
