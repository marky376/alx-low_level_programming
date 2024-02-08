/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * This function copies the string pointed to by src to the buffer pointed to by dest.
 * It will copy at most n bytes from src, and if the length of src is less than n, 
 * the remaining bytes in dest will be filled with null bytes ('\0') to ensure a 
 * properly terminated string.
 *
 * Return: pointer to the destination string dest
 */
