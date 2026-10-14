#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        return NULL;
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

int main() {
    struct Node *head = NULL;

    head = createNode(10);

    if (head == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Data = %d\n", head->data);

    free(head);

    return 0;
}