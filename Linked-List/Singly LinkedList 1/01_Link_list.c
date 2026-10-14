#include <stdio.h>
#include <stdlib.h>

// Node ka structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // 3 nodes ke liye memory allocate karna
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    // Memory allocation check
    if (head == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed\n");
        free(head);
        free(second);
        free(third);
        return 1;
    }

    // First node
    head->data = 10;
    head->next = second;

    // Second node
    second->data = 20;
    second->next = third;

    // Third node
    third->data = 30;
    third->next = NULL;

    // Linked List print karna
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    // Allocated memory free karna
    free(head);
    free(second);
    free(third);

    return 0;
}