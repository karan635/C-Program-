#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;


int isFull() {
    return (front == (rear + 1) % SIZE);
}


int isEmpty() {
    return (front == -1);
}


void enqueue(int value) {
    if (isFull()) {
        printf("Queue is Full!\n");
    } else {
        if (front == -1)  // First element
            front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        printf("%d inserted\n", value);
    }
}


void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
    } else {
        printf("%d deleted\n", queue[front]);
        if (front == rear) {  // Only one element
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
}


void display() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue full after this
    
    display();
    
    dequeue();
    dequeue();
    
    display();
    
    enqueue(60);
    enqueue(70);
    
    display();
    
    return 0;
}

