#include<stdio.h>
#include<conio.h>
void swap(int *p , int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("The Value of A : %d and B : %d ",*p,*q);
}
int main(){
	int a , b , temp;
	int *p,*q;
	printf("Enter the Value of A and B : ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	getch();
}
