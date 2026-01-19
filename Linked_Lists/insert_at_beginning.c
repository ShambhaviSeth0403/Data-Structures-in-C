Q2. Insert a node at the beginning of a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int choice = 1;

    while(choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = head;
        head = newnode;

        printf("Insert more nodes? (1/0): ");
        scanf("%d", &choice);
    }

    temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
