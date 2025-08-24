#include<stdio.h>
#include<conio.h>
int main(){
	int x = 10 ; // a variable that store the value
	int *p; // declaration of the pointer 
	p= &x; // it is a pointer that stores the address of the x variable
	printf("Value of x: %d\n", x);       // prints 10
    printf("Address of x: %p\n", &x);    // prints address of x
    printf("Pointer p holds: %p\n", p);  // prints address of x
    printf("Value at p: %d\n", *p);      // dereference pointer ? prints 10

}
