// This is a header file named "function_pointers.h"
// It contains function prototypes for function pointer usage

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

// Function prototype for print_name function
// Takes a string pointer and a function pointer as parameters
void print_name(char *name, void (*f)(char *));

// Function prototype for array_iterator function
// Takes an integer array, size of the array, and a function pointer as parameters
void array_iterator(int *array, size_t size, void (*action)(int));

// Function prototype for int_index function
// Takes an integer array, size of the array, and a function pointer as parameters
// Returns the index of the first element for which the comparison function returns non-zero
int int_index(int *array, int size, int (*cmp)(int));

#endif
