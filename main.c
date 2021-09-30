#include<stdio.h>


int main(){

// Declare and initialize variables of types char, int, and long.
char a = 'a';
int b = 20;
long c = 31415926535;

//Print out the addresses of each variable in hex and decimal.
printf("char: %p \t%lu\nint: %p \t%lu\nlong: %p \t%lu\n", &a,&a,&b,&b,&c,&c);

//Do you notice anything about the addresses?


//Declare and initialize pointers for each of your variables.
char *ap = &a;
int *bp = &b;
long *cp = &c;


//Print out the values of each pointer.
printf("char: %p \t%lu\nint: %p \t%lu\nlong: %p \t%lu\n", ap,ap,bp,bp,cp,cp);

//Use the pointers to modify the values of the original variables and print out the new values.
*ap = 'b';
*bp = 30;
*cp = 31;
printf("char: %c \nint: %d \nlong: %ld \n",a,b,c);

//Declare and initialize an unsigned int variable and 2 pointers that point to it, one should be an int * and the other should be a char *
unsigned int d = 9;
int *dp1 = &d;
char *dp2 = &d;

//Print out the value of each pointer (this should be the memory address), and de-reference each pointer to print out the value each points to.
//The output should look something like: p: 0x7ffee3dbd938 p points to: 133.

printf("int pointer: %p points to %u \nchar pointer: %p points to %u\n ",dp1,*dp1,dp2,*dp2);

//Print out your unsigned int in decimal and hex.
		//The printf formatting character for a hexadecimal int is: %x
		//The printf formatting character for an unsigned int is: %u
printf("decimal unsigned: %u \nhex unsigned: %x\n", d,d);

//Use the char * to print out each individual byte of your unsigned int.
		//The printf formatting character for a single byte in hex is %hhu for unsigned decimal integer and hhx for an unsigned hex, (that is half of half of an integer).
printf("byte 1: %hhu\nbyte 2: %hhu\nbyte 3: %hhu\nbyte 4: %hhu\n", *dp2, *(dp2+1), *(dp2+2), *(dp2+3));

//Use the char * to increment each byte of the unsigned int by 1. Print out the unsigned int in both hex and decimal after each modification. When done, print out each byte like in step 9. You may need to reset the char * so that it points to the unsigned int, depending on how you wrote step 4 out.
(*dp2)++;
(*(dp2+1))++;
(*(dp2+2))++;
(*(dp2+3))++;
printf("decimal unsigned: %u \nhex unsigned: %x\n", d,d);
printf("byte 1: %hhu\nbyte 2: %hhu\nbyte 3: %hhu\nbyte 4: %hhu\n", *dp2, *(dp2+1), *(dp2+2), *(dp2+3));
//Perform the same operation as in step 10, except add 16 to each byte.
(*dp2)+=16;
(*(dp2+1))+=16;
(*(dp2+2))+=16;
(*(dp2+3))+=16;
printf("decimal unsigned: %u \nhex unsigned: %x\n", d,d);
printf("byte 1: %hhu\nbyte 2: %hhu\nbyte 3: %hhu\nbyte 4: %hhu\n", *dp2, *(dp2+1), *(dp2+2), *(dp2+3));

return 0;
}
