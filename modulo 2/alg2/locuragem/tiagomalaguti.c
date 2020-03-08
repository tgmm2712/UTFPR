#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("digite o valor correpondente com a opção selecionada, ou utilize S para sair.\n");

    printf("1 - Soma de 2 números decimais\n");

    printf("2 - Subtração de 2 números decimais\n");

    printf("3 - Divisão de 2 números decimais\n");

    printf("4 - Multiplicação de 2 números decimais\n");

    printf("5 - Média de 5 números de 2 decimais\n");

    printf("6 - Soma de 5 númmeros decimais\n");

    printf("7 - Maior número decimal dentre 5 números\n");
}

char descricao(double *y, double *z)
{
    printf("digite 2 numeros:\n");
    scanf("%lf", y);
    scanf("%lf", z);
}

double soma(double *y, double *z)
{
    double total;

    total = *y + *z;
    printf("a soma e:%lf\n", total);
}

double subtracao(double *y, double *z)
{
    double total;

    total = *y - *z;
    printf("a subtraçao e:%lf\n", total);
}

double divisao(double *y, double *z)
{
    double total;
    if (*y == 0)
    {
        printf("divisao imposivel!!\n");
    }
    else
    {
        total = *y / *z;
        printf("divisao e:%lf\n", total);
    }
}

double mutiplicacao(double *y, double *z)
{
    double total;

    total = *y * *z;
    printf("a mutiplicacao e:%lf\n", total);
}

double media()
{
    double vet[5], total;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &vet[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        total = total + vet[i];
    }
    printf("media de 5 numeros:%lf\n", total / 5);
}

double svet()
{
    double vet[5], total;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &vet[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        total = total + vet[i];
    }
    printf("soma de 5 numeros:%lf\n", total);
}

double maior()
{
    double vet[5], total;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &vet[i]);
    }
    total = vet[0];
    for (int i = 0; i < 5; i++)
    {

        if (total < vet[i])
        {
            total = vet[i];
        }
    }
    printf("maior de 5 numeros:%lf\n", total);
}

int main(void)
{

    char x = -1;
    double y, z, vet[5];

    while (x != 's')
    {

        menu();

        x = getchar();
        if (x == '\n')
            x = getchar();

        switch (x)
        {

        case '1':

            descricao(&y, &z);
            soma(&y, &z);
            break;

        case '2':
            descricao(&y, &z);
            subtracao(&y, &z);

            break;

        case '3':
            descricao(&y, &z);
            divisao(&y, &z);

            break;

        case '4':
            descricao(&y, &z);
            mutiplicacao(&y, &z);

            break;

        case '5':
            media();

            break;

        case '6':

            svet();
            break;
        case '7':
            maior();

            break;

        case 's':

            printf("até mais!!\n");

            break;

        default:
            printf("opção invalida!selecione a opção correpondente\n");
            break;
        }
    }
}