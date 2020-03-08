#include <stdio.h>
#include <stdlib.h>

int **aloca(int x, int y)
{
    int **mat, cont = 0;

    mat = (int **)malloc(sizeof(int *) * x);

    for (int i = 0; i < x; i++)
    {
        mat[i] = (int *)malloc(sizeof(int) * y);
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            mat[i][j] = cont;
            cont++;
        }
    }

    return mat;
}
int main()
{
    int x, y, **aloc;

    scanf("%d %d", &x, &y);

    aloc = aloca(x, y);
    int cont = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", aloc[j][i]);
        }
        printf("\n");
    }
}