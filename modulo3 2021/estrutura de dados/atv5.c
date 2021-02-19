#include <stdio.h>
#include <stdlib.h>

struct ponto2D {
    float x, y;
};

typedef struct ponto2D ponto2D_t;

ponto2D_t* ponto2D_new(float x, float y) {
    ponto2D_t *p = malloc(sizeof(ponto2D_t));
    p->x = x;
    p->y = y;

    return p;
}

void ponto2D_print(ponto2D_t *p) {
    printf("%.2f, %.2f\n", p->x, p->y);
}

void ponto2D_free(ponto2D_t **pp) {
    free(*pp);
    *pp = NULL;
}

ponto2D_t* ponto2D_sum(ponto2D_t *p1, ponto2D_t *p2, ponto2D_t *pr) {
    if (pr == NULL) {
        pr = ponto2D_new(0, 0);
    }
    pr->x = p1->x + p2->x;
    pr->y = p1->y + p2->y;

    return pr;
}

int main() {
    ponto2D_t *p1 = ponto2D_new(10, 20);
    ponto2D_t *p2 = ponto2D_new(1, 3);
    ponto2D_print(p1);
    ponto2D_print(p2);
    ponto2D_t *p3 = ponto2D_sum(p1, p2, NULL);
    ponto2D_print(p3);
    
    ponto2D_free(&p1);
    ponto2D_free(&p2);
    
    // printf("%p\n", p3);
    ponto2D_free(&p3);
    // printf("%p\n", p3);
}