Q3. Circular Queue using Array

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if((rear + 1) % SIZE == front) {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = x;
}

void dequeue() {
    if(front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);

    if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    dequeue();
    dequeue();

    return 0;
}
