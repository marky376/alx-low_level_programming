#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98;
}

int main() {
	int num = 5;

	printf("Before reset_to_98: num = %d\n", num);
	reset_to_98(&num);  // Pass the address of 'num' to the function
	printf("After reset_to_98: num = %d\n", num);

	return 0;
}

