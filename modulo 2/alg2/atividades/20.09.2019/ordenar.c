#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a, b, c;
    int *p1, *p2, *p3, *paux;
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;

    if(*p1 < *p2) {
        paux = p1;
        p1 = p2;
        p2 = paux;
    }
    
    if(*p1 < *p3) {
        paux = p1;
        p1 = p3;
        p3 = paux;
    }

    if(*p2 < *p1) {
         paux = p2;
        p2 = p1;
        p1 = paux;
    }

    if(*p2 < *p3) {
        paux = p2;
        p2 = p3;
        p3 = paux;
    }

    if(*p3 < *p1) {
        paux = p3;
        p3 = p1;
        p1 = paux;
    }

    if(*p3 < *p2) {
         paux = p2;
        p2 = p3;
        p3 = paux;
    }

    
 

    printf("%d %d %d -- %d %d %d\n", *p1, *p2, *p3, a, b, c);
    return 0;
}
