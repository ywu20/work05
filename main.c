#include<stdio.h> 


int main(){
	char a = 'a';
	int b = 20;
	long c = 31415926535;
	printf("char: %p \nint: %p \nlong: %p \n", &a,&b,&c);
	char *ap = &a;
	int *bp = &b;
	long *cp = &c;
	printf("char: %p \nint: %p \nlong: %p \n", ap,bp,cp);
}
