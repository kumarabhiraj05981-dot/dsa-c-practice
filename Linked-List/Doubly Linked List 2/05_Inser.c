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
    struct Node *n = malloc(sizeof(struct Node));

    if (h == NULL || s == NULL || t == NULL || f == NULL || n == NULL) {
    printf("Memory allocation failed\n");

    free(h);
    free(s);
    free(t);
    free(f);
    free(n);

    return 1;
}

    h->data = 10;
    h->prev = NULL;
    h->next = s;

    s->data = 20;
    s->prev = h;
    s->next = n;
    
    // Insert 25 after 20
    n->data = 25;
    n->prev = s;
    n->next = t;

    t->data = 30;
    t->prev = n;
    t->next = f;

    f->data = 40;
    f->prev = t;
    f->next = NULL;


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
    free(n);

    return 0;
}