#include <stdio.h>
#include <string.h>

int add_num(int numbers[3], int len);
int add_num_using_pointer(int *pointer, int length);

void main() {
	int numbers[3] = {2, 4, 6};
	int len = sizeof(numbers) / sizeof(*numbers);
	printf("Total value of array passing methd is %d \n", add_num(numbers, len));

	int num2[2] = {10, 3};
	int length = sizeof(num2) / sizeof(*num2);

	int l = *(&num2 + 1) - num2;
	printf("Another method of finding Length %d\n", l);

	printf("Total value of pointer passing methd is %d \n", add_num_using_pointer(num2, length));
	printf("Size of array is %ld \t and Size of array pointer %ld \t and overall length of array is %d \n", sizeof(num2), sizeof(*num2), length);
}

int add_num(int numbers[3], int len) {
	int total = 0;

	for(int i = 0; i < len; ++i) {
		total += numbers[i];
	}

	return total;
}

int add_num_using_pointer(int *pointer, int length) {
	int total = 0;

	for(int i = 0; i < length; ++i) {
		total += pointer[i];
		pointer[i]++;
	}

	return total;
}
