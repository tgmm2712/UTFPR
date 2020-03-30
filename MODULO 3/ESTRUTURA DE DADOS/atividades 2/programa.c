#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trasicao.h"

int main(){

    //decalracao das variaveis
    double a,b,c;

    //coleta de informacoes
    printf("digite o valor de A:");
    scanf("%lf",&a);
    printf("digite o valor de B:");
    scanf("%lf",&b);
    printf("digite o valor de C:");
    scanf("%lf",&c);

    //declara um ponteiro de struct e chama a funcao para armazenar dados
    dados *new = alocacao(a,b,c);

    resultados *total = baskara(new);

    mostrar(total);

}
