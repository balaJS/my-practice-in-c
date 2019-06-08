#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

int minus(int num1, int num2) {
	return num2 - num1;
}

float calculate(int num1, int num2, char type) {
	float output;
	switch(type) {
		case '+':
			output = num2 + num1;
			break;
		case '-':
			output = num2 - num1;
			break;
		case '*':
			output = num2 * num1;
			break;
		default:
			output = num2 / num1;
	}
	return output;
}


void main() {
	int no1, no2;
	char symbols[4] = {'+', '-', '*', '/'};
	
	printf("%s", "Enter value of a => ");
	scanf("%d", &no1);
	printf("%s", "Enter value of b => ");
	scanf("%d", &no2);

	// printf("Output of Add %f \n", calculate(no1, no2, '+'));
	// printf("Output of Substract %f \n", calculate(no1, no2, '-'));
	// printf("Output of Multiply %f \n", calculate(no1, no2, '*'));
	// printf("Output of Divide %f \n", calculate(no1, no2, '/'));
	for(int i = 0; i < 4; ++i) {
		printf("%c's Output => %f \n", symbols[i], calculate(no1, no2, symbols[i]));
	}
}