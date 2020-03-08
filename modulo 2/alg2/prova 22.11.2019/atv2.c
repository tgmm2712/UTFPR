#include <stdio.h>
#include <stdlib.h>
double mat(int x, int y)
{
    double *matriz[y];
    *matriz = ((double *)malloc(sizeof(int) * x));

    for (int i = 0; i < x; i++)
    {
        matriz[i] = ((double *)malloc(sizeof(int) * y));
        
    }

   
  /*  for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
           printf("%.2lf\n",matriz[i][j]);
        }
    }*/
    return *matriz[y];
}

int main()
{

    int i, j;

    scanf("%d %d", &i, &j);

    double *matriz[i][j];


    //matriz = mat(i, j);
    for (int i = 0; i < i; i++)
    {
        for (int j = 0; j < j; j++)
        {
           printf("%.2lf\n",matriz[i][j]);
        }
    }
}