#include <stdio.h>
#include <stdlib.h>

int menu(int x)
{
    printf("menu:\n1-Gravar\n2-Ler\n3-Sair\n");
    scanf("%d", &x);
    return x;
}

int main()
{
    int x, cont = 0, y = 2;
    int *p = (int *)malloc(sizeof(int) * (2 * 1));

    x = menu(x);

    while (x != 3)
    {
        switch (x)
        {
        case 1:
            scanf("%d", &p[cont]);

            cont++;
            if (cont == y)
            {
                y *= 2;
                p = realloc(p, sizeof(int) * y);
            }
            break;
        case 2:
            for (int i = 0; i < y; i++)
            {
                printf("%d\n", p[i]);
            }
            break;
        case 3:

            break;

        default:
            printf("nao executado!\n");
            break;
        }
        x = menu(x);
    }
}