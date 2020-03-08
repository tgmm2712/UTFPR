#include <stdio.h>
#include <math.h>

int main()
{

    char x;


    scanf("%c", &x);

    switch(x)
    {


    case 'A':
        printf("Excelente! Parabens!\n");
        break;


    case 'B':
        printf("Voce foi bem.\n");
        break;

    case 'C':
        printf("Voce foi bem.\n");
        break;

    case 'D':
        printf("Foi por muito pouco!\n");
        break;

    case 'F':
        printf("Estudar mais na proxima.\n");
        break;

    default:
        printf("Valor invalido.\n");
        break;


    }

    return 0;
}
