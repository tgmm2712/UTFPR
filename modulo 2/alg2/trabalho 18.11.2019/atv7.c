#include <stdio.h>
#include <stdlib.h>

int* funt(int x)
{

    int *p = (int *)malloc(sizeof(int) * x);
    return p;
}

int main()
{
    int *p, x;
    scanf("%d", &x);

    p = funt(x);
}