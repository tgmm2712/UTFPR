#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct dados dad;

struct dados
{
    int id;
    char nome[50];
    int idade;
};

int main()
{
    dad vet[10];

    FILE *xxt;

    xxt = fopen("xxt.txt","w");


    for (int i = 0; i < 10; i++)
    {
        fscanf(xxt,"%d %c %d\n", &vet[i].id, &vet[i].nome[50], &vet[i].idade);
    }

fclose(xxt);

}