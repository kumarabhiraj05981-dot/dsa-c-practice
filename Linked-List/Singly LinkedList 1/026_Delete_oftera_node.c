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
    third->next = new_node;

    // Link_list_nsertion_Ofter_a_Node_end
    
    new_node->next = NULL;
    third->next = new_node;
    new_node->data = 40;

    // Delete_oftera_node
    head -> next = second ->next;
    free(second);
    second = NULL;

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