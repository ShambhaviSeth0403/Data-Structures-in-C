Q5. Check Balanced Parentheses using Stack


#include <stdio.h>
#include <string.h>

int main() {
    char exp[100], stack[100];
    int top = -1, i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(')
            stack[++top] = '(';
        else if(exp[i] == ')') {
            if(top == -1) {
                printf("Unbalanced\n");
                return 0;
            }
            top--;
        }
    }

    if(top == -1)
        printf("Balanced\n");
    else
        printf("Unbalanced\n");

    return 0;
}
