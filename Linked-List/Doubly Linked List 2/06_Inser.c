#include <stdio.h>
#include  <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
int main () {
    struct Node *h, *s, *t, *f;

    h = malloc(sizeof(struct Node));
    s = malloc(sizeof(struct Node));
    t = malloc(sizeof(struct Node));
    f = malloc(sizeof(struct Node));

    // Insert 25 after 20
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));


    if (h == NULL || s == NULL || t == NULL || f == NULL || n1 == NULL || n2 == NULL) {
    printf("Memory allocation failed\n");

    free(h);
    free(s);
    free(t);
    free(f);
    free(n1);
    free(n2);

    return 1;
}

    h->data = 10;
    h->prev = NULL;
    h->next = s;

    s->data = 20;
    s->prev = h;
    s->next = n1;
    
    
    n1->data = 25;
    n1->prev = s;
    n1->next = t;

    t->data = 30;
    t->prev = n1;
    t->next = n2;

    f->data = 40;
    f->prev = n2;
    f->next = NULL;

    // 30 ke baad 35 insert 

    n2->data = 35;
    n2->prev = t;
    n2->next = f;


    struct Node *temp = h;
    
    printf("Forward: ");
    while (temp != NULL) {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

    free(h);
    free(s);
    free(t);
    free(f);
    free(n1);
    free(n2);

    return 0;
}