Q5. Search an element in a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp;
    int n, i, key, pos = 1, found = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &temp->data);
        temp->next = head;
        head = temp;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            printf("Element found at position %d", pos);
            found = 1;
            break;
        }
        pos++;
        temp = temp->next;
    }

    if(!found)
        printf("Element not found");

    return 0;
}
