Q9. Reverse a Stack using Temporary Stack

#include <stdio.h>
#define SIZE 5

int stack1[SIZE], stack2[SIZE];
int top1 = -1, top2 = -1;

int main() {
    stack1[++top1] = 10;
    stack1[++top1] = 20;
    stack1[++top1] = 30;

    while(top1 != -1)
        stack2[++top2] = stack1[top1--];

    printf("Reversed Stack: ");
    while(top2 != -1)
        printf("%d ", stack2[top2--]);

    return 0;
}
