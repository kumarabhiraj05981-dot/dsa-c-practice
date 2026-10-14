#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
int main() 
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *new_node = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed\n");
        free(head);
        free(second);
        free(third);
        free(new_node);
        return 1;
    }

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Link_list_nsertion At Beginnig me 
    
    new_node->next = head;
    head = new_node;
    new_node->data = 5;

    struct Node *temp = head;

    while (temp != NULL) {
        printf(" %d ->",temp->data);
        temp = temp->next;
    }
    printf(" NULL\n");

    free(head);
    free(second);
    free(third);
    free(new_node);

    return 0;
}