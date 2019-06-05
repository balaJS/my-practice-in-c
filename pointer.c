#include <stdio.h>

int main () {

   // If you want allocate memory address, you need pointer variable like int* pointer.
   int* pointer, var = 5;
   printf("Value of var1 variable: %d\n", var);
   printf("Address of var1 variable: %p\n", &var);

   printf("%s\n", "---------After using pointer variable---------");

   pointer = &var;
   // If you change value of pointer, it change value only, not memory address
   *pointer = 100;
   printf("Value of pointer variable: %d\n", *pointer);
   // pointer variable had value like 0x7ffcacf9d21c, so we must use %p for memory address printing
   printf("Address of pointer variable: %p\n", pointer);

   return 0;
}