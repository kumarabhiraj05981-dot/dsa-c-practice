#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int main() {
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL || fourth == NULL){
        printf("Memory allocation failed\n");
        free(head);
        free(second);
        free(third);
        free(fourth);
        return 1;
    }
    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30; 
    third -> next = fourth;

    fourth -> data = 40;
    fourth -> next = NULL;

    int key = 20;
    struct Node *temp = head;
    int found = 0;

    while (temp != NULL) {
    if (temp->data == key) {
        found = 1;
        break;
    }

    temp = temp->next;
}

    if (found == 1) {
        printf("Element Found\n");
    }else {
        printf("Element Not found\n");
    }

    free(head);
    free(second);
    free(third);
    free(fourth);
   

    return 0;
}