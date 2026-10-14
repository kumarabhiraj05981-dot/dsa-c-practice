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

    if (head == NULL || second == NULL ||
        third == NULL || fourth == NULL) {
        printf("Memory allocation failed\n");
        free(head);
        free(second);
        free(third);
        free(fourth);
        return 1;
    }

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    int sum = 0;
    struct Node *temp = head;

    while (temp != NULL) {
        sum = sum + temp->data;
        temp = temp->next;
    }
    
    printf("Sum of node data = %d\n", sum);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}