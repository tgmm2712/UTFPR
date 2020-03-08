#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    int j, i;
    float vetor_1[3], vetor_2[3];
    float aux,x,y,z;



    for (i=0; i<=2; i++)
    {

        scanf("%f", &vetor_1[i]);
        vetor_2[i]=vetor_1[i];



    }
    for (j=0; j< 3; j++)
    {
        for(i=0; i<3; i++)
        {
            if (vetor_1[i] > vetor_1[i+1])
            {
                aux = vetor_1[i];
                vetor_1[i]=vetor_1[i+1];
                vetor_1[i+1]=aux;
            }
        }
    }

    x=vetor_1[3];
    y=vetor_1[2];
    z=vetor_1[1];

    if  ( x >= (y+z))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if ( (x*x) == ((y*y)+(z*z)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if ( (x*x) >((y*y)+(z*z)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ( (x*x) < ((y*y)+(z*z)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if ((x==y) && (y==z))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (((x==y) && (y!=z)) || ((y==z) && (z!=x)) || ((z==x) && (x!=y)) )
    {
        printf("TRIANGULO ISOSCELES\n");
    }
}
