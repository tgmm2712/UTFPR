#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main()
{

    float x, y;

    scanf("%f %f", &x, &y);

    if ((x == 0) && (y == 0))
    {
        printf("Origem\n");

    }
    else if ((x == 0) || (y == 0))
    {
        if (x == 0)
        {
            printf("Eixo Y\n");
            return 0;
        }
        else
        {
            printf("Eixo X\n");
            return 0;
        }
    }
    if  ((x > 0) && (y > 0))
    {
        printf("Q1\n");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("Q2\n");
        return 0;
    }
    else if ((x < 0) && (y < 0))
    {
        printf("Q3\n");
        return 0;
    }
    else if ((x > 0) && (y < 0))
    {
        printf("Q4\n");

        return 0;
    }
}
