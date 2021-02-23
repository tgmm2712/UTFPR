 #include <stdio.h>
 #include <stdlib.h>
 int main() {
    int a, *pa, **ppa;
    int b, *pb, **ppb;

    a = 5;
    b = 7;
    pa = &a;
    pb = &b;
    ppa = &pa;
    

    a++;
    *pb = **ppb + 1;

    *pa += *pb;

    printf("%i, %i\n", a, b);

    return 1;
}