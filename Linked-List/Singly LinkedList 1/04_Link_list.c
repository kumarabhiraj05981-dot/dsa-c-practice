#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main() {
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL){
        printf("Memory allocation failed\n");
        free(head);
        free(second);
        free(third);
        return 1;
    }
 
    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    struct Node *temp = head;

    while (temp != NULL){
        printf(" %d -> ",temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
    free(head);
    free(second);
    free(third);

    return 0;
}