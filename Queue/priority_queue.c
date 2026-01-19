Q5. Priority Queue (Simple Implementation using Array)

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int rear = -1;

void enqueue(int x) {
    if(rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    queue[++rear] = x;
}

void dequeue() {
    if(rear == -1) {
        printf("Queue Underflow\n");
        return;
    }

    int i, min = 0;
    for(i = 1; i <= rear; i++) {
        if(queue[i] < queue[min])
            min = i;
    }

    printf("Deleted: %d\n", queue[min]);

    for(i = min; i < rear; i++)
        queue[i] = queue[i + 1];
    rear--;
}

int main() {
    enqueue(40);
    enqueue(10);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
