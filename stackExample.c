#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

int stack[MAXSIZE];
int top = -1;

int isEmpty() {
    return top == -1;
}

void push(int item) {
    if (top == MAXSIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = item;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    int item = stack[top];
    top--;
    return item;
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Popped: %d\n", pop()); 
    printf("Popped: %d\n", pop()); 

    return 0;
}