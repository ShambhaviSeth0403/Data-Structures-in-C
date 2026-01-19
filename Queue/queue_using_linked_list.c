Q2. Implement Queue using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;

    if(rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    struct node *temp = front;
    printf("Deleted: %d\n", front->data);
    front = front->next;
    free(temp);
}

int main() {
    enqueue(5);
    enqueue(15);
    enqueue(25);

    dequeue();
    dequeue();

    return 0;
}
