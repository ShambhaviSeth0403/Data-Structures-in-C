Q10. Check Overflow and Underflow in Stack


#include <stdio.h>
#define SIZE 3

int stack[SIZE];
int top = -1;

int main() {
    if(top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        printf("Stack Not Full\n");

    if(top == -1)
        printf("Stack Underflow");
    else
        printf("Stack Not Empty");

    return 0;
}
