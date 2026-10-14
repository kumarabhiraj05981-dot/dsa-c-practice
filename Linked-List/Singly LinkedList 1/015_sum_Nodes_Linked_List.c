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

    third->next = fourth -> next;
    free(fourth);
    fourth = NULL;
    
    int sum = 0, count = 0;
    struct Node *temp = head;

    while (temp != NULL) {
    sum = sum + temp->data;
    printf("%d -> ", temp->data);
    count++;
    temp = temp->next;
}
    printf("NULL\n");

    printf("Sum of all data Nodes: %d\n",sum);
    printf("count total nodes %d\n",count);
    

    free(head);
    free(second);
    free(third);
   
    free(five);
    free(six);
    free(seven);

    return 0;

}