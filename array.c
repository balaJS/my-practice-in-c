#include <stdio.h>
#define size 2
void main() {
	int count = 2;
	int marks[size] = {2, 4};
	int my_version[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < count; ++i) {
		printf("%d \t", marks[i]);
	}
	printf("\n my_version array data \n");

	/*
		find length of array. sizeof calculate count from 0.
	*/
	int my_version_lenth = sizeof(my_version[0]) + 1;

	for (int j = 0; j < my_version_lenth; ++j) {
		printf("%d \t", my_version[j]);
	}
	printf("\n");
}