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

    head->data = 10;
    head->next = second;    

    second->data = 15;
    second->next = third;

    third->data = 22;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = five;

    five->data = 30;
    five->next = six;

    six->data = 41;
    six->next = seven;

    seven->data = 18;
    seven->next = NULL;

    int sum = 0,count = 0;
    float average;
    struct Node *temp = head;

    while (temp != NULL) {
        sum = temp-> data + sum;
        count++;
        temp = temp->next;
    }

    average = (float)sum / count;

    printf("average: %.2f",average);
    
    free(head);
    free(second);
    free(third);
    free(fourth);
    free(five);
    free(six);
    free(seven);

    return 0;
}