Q4. Delete a node from the beginning of a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &temp->data);
        temp->next = head;
        head = temp;
    }

    if(head == NULL) {
        printf("List is empty");
    } else {
        temp = head;
        head = head->next;
        free(temp);
    }

    temp = head;
    printf("Linked List after deletion: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
