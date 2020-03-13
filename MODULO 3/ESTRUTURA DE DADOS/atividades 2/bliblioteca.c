#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "trasicao.h"

typedef struct valores
{
   char nome[35];
   char ra[7];
}conver;


void acesso(char *nome,char *ra){
    conver login;
    printf("Digite seu nome:");
    scanf("%s",login.nome);
    printf("Digite seu RA:");
    scanf("%s",login.ra);

}
/*
void menu(int *moeda){
        printf ("Digite 'Dolar' para converter de Real para Dolar.\n");
        printf ("Digite 'Euro' para converter de Real para Euro.\n");
        printf ("Digite 'Peso' para converter de Real para Peso.\n");
        printf ("Digite 'Libra' para converter de Real para Libra.\n");
        printf ("Digite 'Iene' para converter de Real para Iene.\n");
        printf ("Digite 'Sair' para Sair.\n");

        scanf(" %d", moeda);

}*/