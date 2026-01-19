Q8. Evaluate Postfix Expression using Stack

#include <stdio.h>
#include <ctype.h>

int stack[50];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char exp[50];
    int i, op1, op2;

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++) {
        if(isdigit(exp[i])) {
            push(exp[i] - '0');
        } else {
            op2 = pop();
            op1 = pop();
            switch(exp[i]) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
            }
        }
    }

    printf("Result: %d", pop());
    return 0;
}
