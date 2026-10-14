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
    struct Node *six = malloc(sizeof (struct Node));
    struct Node *seven = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL || fourth == NULL || 
        five == NULL || six == NULL || seven == NULL) {
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
    
    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth ->data = 40;
    fourth->next = five;

    five->data = 50;
    five->next = six;

    six->data = 60;
    six->next = seven;

    seven->data = 70;
    seven->next = NULL;

    
    
    int position = 1,key;
    printf("Enter element to search: ");
    scanf("%d",&key);
    int found = 0;
    struct Node *temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }
    if (found == 0) {
        printf("Element Not found");
    }

    free(head);
    free(second);
    free(third);
    free(fourth);
    free(five);
    free(six);
    free(seven);

    return 0;

}