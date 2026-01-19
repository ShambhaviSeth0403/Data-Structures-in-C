Q6. Find Top Element (Peek) of Stack using Array

#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int main() {
    if(top == -1) {
        printf("Stack is empty");
    } else {
        printf("Top element: %d", stack[top]);
    }
    return 0;
}
