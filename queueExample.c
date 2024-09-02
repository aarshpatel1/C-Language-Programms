#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

int queue[MAXSIZE];
int front = -1, rear = -1;

int isEmpty() {
    return front == -1;
}

void enqueue(int item) {
    if (rear == MAXSIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear++;
    queue[rear] = item;
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }
    int item = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return item;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequeued: %d\n", dequeue()); 
    printf("Dequeued: %d\n", dequeue()); 

    return 0;
}