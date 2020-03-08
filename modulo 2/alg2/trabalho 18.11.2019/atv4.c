#include <stdlib.h>
#include <stdio.h>
typedef struct avali vali;

struct avali
{
    int sens;
    int car;
    int efic;
};

int menu(int x)
{

    printf("_______________________________________________________\n");
    printf("menu usuario:\nDigite o numero correspondente\n");
    printf("1-Avaliar\n2-Apurar\n3-Sair\n");
    printf("_______________________________________________________\n");
    scanf("%d", &x);
    return (x);
}

void apurar(vali p[8], int x, int y, int z, int media)
{

    for (int i = 0; i < 8; i++)
    {
        printf("_______________________________________________________\n");
        printf("Candidato %d medias:\n", i + 1);
        printf("Sensibilidade media:%d\n", x / media);
        printf("Carisma media:%d\n", y / media);
        printf("Eficiencia media:%d\n", z / media);
        printf("_______________________________________________________\n");
    }
}

void avaliar(vali *p, int *x, int *y, int *z)
{

    for (int i = 0; i < 8; i++)
    {
        printf("candidato %d:\n", i + 1);
        printf("sensibilidade:");
        scanf("%d",&x);
        printf("Carrisma:");
        scanf("%d",&y);
        printf("Eficiencia");
        scanf("%d",&z);
        printf("\n");

            (p[i].sens)= x + (p[i].sens);
            (p[i].car) = y + (p[i].car);
            (p[i].efic) = z + (p[i].efic);
    }
}

int main()
{
    int h, media = 0;
    int x = 0, y = 0, z = 0;
    vali p[8];
    h = menu(h);
    while (h != 3)
    {
        media++;

        switch (h)
        {
        case 1:
            avaliar(p, &x, &y, &z);
            h = menu(h);
            printf("%d %d %d", x, y, z);
            break;
        case 2:
            apurar(p, x, y, z, media);
            h = menu(h);

            break;

        case 3:

            break;
        default:
            printf("Nao executado\n");
            break;
        }
    }
}