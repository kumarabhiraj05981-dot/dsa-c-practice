#include <stdio.h>
#include <stdlib.h>

struct Node  {
    int data;
    struct Node *prev;
    struct Node *next;
};
int main() {
    struct Node *h, *s, *n1, *t, *f, *n2, *p;
    
    h = malloc(sizeof(struct Node));
    s = malloc(sizeof(struct Node));
    n1 = malloc(sizeof(struct Node));
    t = malloc(sizeof(struct Node));
    f = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    p = malloc(sizeof(struct Node));

    if (h == NULL || s == NULL || n1 == NULL || t == NULL || f == NULL || n2 == NULL || p == NULL) {
        printf("Memory allocation failed\n");
        
        free(h);
        free(s);
        free(n1);
        free(t);
        free(f);
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
    t->next = f;

    f->data = 35;
    f->prev = t;
    f->next = n2;

    n2->data = 40;
    n2->prev = f;
    n2->next = NULL;

    // 10 wala node Delete
    p = h;
    h = h->next;
    h->prev = NULL;
    free(p);
    

    struct Node *temp = h;

    printf("Forward: ");
    while (temp != NULL) {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

    
    free(s);
    free(n1);
    free(t);
    free(f);
    free(n2);

    return 0;

    
}