#include "main.h"

/**
_struct - Concatenates two strings
@dest: The destination string
@src: The source string to be concatenated to dest

Return: A pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int src_len = 0;

    /* Find the length of the destination string*/
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    /* Find the length of the source string*/
    while (src[src_len] != '\0') {
        src_len++;
    }

    /* Append the source string to the destination*/
    for (int i = 0; i < src_len; i++) {
        dest[dest_len + i] = src[i];
    }
/* Add the null terminator to the concatenated string*/
    dest[dest_len + src_len] = '\0';

    return dest;
}
