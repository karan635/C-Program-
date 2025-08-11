// write a program of quadratic equation 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,c,d;
double root1,root2;
printf("Enter the Value of a: ");
scanf("%d",&a);
printf("Enter the Value of b: ");
scanf("%d",&b);
printf("Enter the Value of c: ");
scanf("%d",&c);
d=(b*b-4*a*c);
printf("%d\n",d);
if (d>0){
	root1=((-b + sqrt(d))/(2.0*a));
	root2=((-b - sqrt(d))/(2.0*a));
	printf("The root of this equation is %lf\n",root1);
	printf("The root of this equation is %lf\n",root2);
}
else if(d==0){
	root1=root2=((-b)/(2.0*a));
	printf("The root of this equation is equal %lf\n",root1);
	printf("The root of this equation is equal %lf\n",root2);
}
else{
	root1=(-b + sqrt(-d))/(2.0*a);
	root2=(-b - sqrt(-d))/(2.0*a);
	printf("The root of this equation are imaginry %lf\n",root1);
	printf("The root of this equation are imaginry %lf\n",root2);
}
getch();
}
