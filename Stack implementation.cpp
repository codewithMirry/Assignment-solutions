#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;  // -1 means the stack is empty

// Check if stack is empty
int isEmpty() {
    return top == -1;
}

// Check if stack is full
int isFull() {
    return top == MAX - 1;
}

// Push operation
void push(int item) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = item;
    printf("Pushed item: %d\n", item);
}

// Pop operation
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;  // sentinel value
    }
    int item = stack[top];
    top--;
    return item;
}

// Peek operation
int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

// Display the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Popped item: %d\n", pop());
    display();
    return 0;
}