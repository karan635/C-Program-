#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

char str[MAX];
int top=-1;

void push(char val){
	if(top == MAX-1){
		printf("Stack Overflow");
	}
	else{
		str[++top]=val;
	}
}

char pop(){
	if(top==-1){
		printf("Stack is Underflow");
	}
	else{
		return str[top--];
	}
}

int isvalid(char expr[]){
	int i;
	for(i=0;i<strlen(expr);i++)
	{
		char ch = expr[i];
		if(ch =='(' || ch == '{' || ch == '[' )
		{
			push(ch);
		}
		else if(ch ==')' || ch == '}' || ch == ']' ){
			if(top == -1){
				return 0;
			}
			char topchar = pop();
			if ((ch == ')' && topchar != '(') ||
                (ch == '}' && topchar != '{') ||
                (ch == ']' && topchar != '[')){
                	return 0;
                	
				}
		}
	}
	return(top == -1);
}
int main() {
    char expr[MAX];

    printf("Enter an expression: ");
    scanf("%s", expr);

    if (isvalid(expr)) {
        printf("Valid Parentheses ?\n");
    } else {
        printf("Invalid Parentheses ?\n");
    }

	getch();
    return 0;
}
