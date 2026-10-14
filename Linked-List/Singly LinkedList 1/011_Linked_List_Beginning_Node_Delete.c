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

    // Delete first node
    struct Node *temp = head;
    head = head->next;
    free(temp);

    // Print the linked list
    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    // Free remaining nodes exactly once
    free(head);
    free(third);
    free(fourth);

    return 0;
}