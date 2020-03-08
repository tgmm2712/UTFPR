#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct avali vali;

struct avali
{
    int sens;
    int car;
    int efic;
};

int main()
{
    vali p[8] = {0};
    int h, x = 0, y = 0, z = 0, media = 0;

    while (h != 3)
    {
        printf("_______________________________________________________\n");
        printf("menu usuario:\nDigite o numero correspondente\n");
        printf("1-Avaliar\n2-Apurar\n3-Sair\n");
        printf("_______________________________________________________\n");
        scanf("%d", &h);

        switch (h)
        {
        case 1:
            for (int i = 0; i < 8; i++)
            {

                printf("candidato %d:\n", i + 1);
                printf("sensibilidade:");
                scanf("%d", &x);
                printf("Carrisma:");
                scanf("%d", &y);
                printf("Eficiencia");
                scanf("%d", &z);
                printf("\n");

                (p[i].sens) = x + (p[i].sens);
                (p[i].car) = y + (p[i].car);
                (p[i].efic) = z + (p[i].efic);
            }
            media++;
            break;
        case 2:
            for (int i = 0; i < 8; i++)
            {
                printf("_______________________________________________________\n");
                printf("Candidato %d medias:\n", i + 1);
                printf("Sensibilidade media:%d\n", p[i].sens / media);
                printf("Carisma media:%d\n", p[i].car / media);
                printf("Eficiencia media:%d\n", p[i].efic / media);
                printf("_______________________________________________________\n");
            }
            break;
        case 3:
        break;
        default:
            printf("nao executado\n");
            break;
        }
    }
}