Q4. Double Ended Queue (Deque) – Insert at Rear, Delete from Front

#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

void insertRear(int x) {
    if(rear == SIZE - 1) {
        printf("Deque Overflow\n");
        return;
    }
    if(front == -1)
        front = 0;
    deque[++rear] = x;
}

void deleteFront() {
    if(front == -1 || front > rear) {
        printf("Deque Underflow\n");
        return;
    }
    printf("Deleted: %d\n", deque[front++]);
}

int main() {
    insertRear(10);
    insertRear(20);
    insertRear(30);

    deleteFront();
    deleteFront();

    return 0;
}
