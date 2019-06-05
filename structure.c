#include <stdio.h>

struct {
	int php;
	int js;
	int java;
	int c;
} bala;


void main() {
	bala.php = 10;
	bala.js = 20;
	bala.java = 30;
	bala.c = 40;

	printf("php value of Bala = %d \n", bala.php);
	printf("js value of Bala = %d \n", bala.js);
	printf("java value of Bala = %d \n", bala.java);
	printf("c value of Bala = %d \n", bala.c);

	printf("%s\n", "------------------------------------------------");
	
}