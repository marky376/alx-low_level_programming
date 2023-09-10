
#include <stdio.h>
/**
 * main -main function
 *
 * Return:always 0
 */


int main(void)
{
    char i  = 'a';

    while (i <= 'z')
    {
        putchar(i);
        i++;
    }

    putchar('\n');

    return 0;
}
