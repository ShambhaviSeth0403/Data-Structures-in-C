Q3. Check Palindrome using Stack

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], stack[100];
    int top = -1, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
        stack[++top] = str[i];

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != stack[top--]) {
            printf("Not a palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}
