Q4. Reverse a string using Stack

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], stack[100];
    int top = -1, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
        stack[++top] = str[i];

    printf("Reversed string: ");
    while(top != -1)
        printf("%c", stack[top--]);

    return 0;
}
