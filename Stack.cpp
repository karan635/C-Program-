#include<stdio.h>
#include<conio.h>
#define MAX 5

int arr[MAX];
int top=-1;

void push(int val){
	if(top == MAX-1){
		printf("Stack Overflow");
	}
	else{
		arr[top+=1]=val;
		printf("%d The Value is Inseted successfully ");
	}
}

void pop(){
	if(top==-1){
		printf("Stack is Underflow");
	}
	else{
		printf("%d The Stack Element Delete Successfully",arr[top-=1]);
	}
}

void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d\n", arr[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}


int main() {
    int choice, val;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Thank You");
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
