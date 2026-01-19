Q1. Implement Queue using Array

Concept: FIFO (First In First Out)


#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if(rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1)
        front = 0;
    queue[++rear] = x;
}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", queue[front++]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
