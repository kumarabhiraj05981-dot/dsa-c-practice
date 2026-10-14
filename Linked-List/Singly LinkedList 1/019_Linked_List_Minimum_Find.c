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
    struct Node *five = malloc(sizeof(struct Node));
    struct Node *six = malloc(sizeof(struct Node));
    struct Node *seven = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL ||
        fourth == NULL || five == NULL || six == NULL ||
        seven == NULL) {

        printf("Memory allocation failed\n");

        free(head);
        free(second);
        free(third);
        free(fourth);
        free(five);
        free(six);
        free(seven);

        return 1;
    }

    head->data = 25;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = five;

    five->data = 19;
    five->next = six;

    six->data = 30;
    six->next = seven;

    seven->data = 15;
    seven->next = NULL;

    int min = head->data;
    struct Node *temp = head;

    while (temp != NULL) {
        if (temp->data < min) {
            min = temp->data;
        }

        temp = temp->next;
    }

    printf("Minimum value: %d\n", min);

    free(head);
    free(second);
    free(third);
    free(fourth);
    free(five);
    free(six);
    free(seven);

    return 0;
}