#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "trasicao.h"

//struct de dados
struct valores
{
    double a;
    double b;
    double c;
};

struct resultados
{
    double x1;
    double x2;
};


//funcao de armazenamento de dados na struct
dados *alocacao(double a,double b, double c){
    
    //alocacao dinamica das variaveis struct
    dados *new = malloc(sizeof(dados));

    //armazena dados na struct da passagem por referencia
    new->a = a;
    new->b = b;
    new->c = c;

    return new;
}


resultados *baskara(dados *new){
    double a = new->a;
    double b = new->b;
    double c = new->c;
    double delta,p1,p2,p3;
    
    resultados *total = malloc(sizeof(resultados));

    delta = (sqrt((b*b) -(4*a*c)));
    
    if(delta < 0){
      printf("Equacao de segundo grau nao possui raizes reais\n");
      exit(0);
    }
    else if (delta == 0){
      printf("Equacao de segundo grau possui uma raiz real:%.2lf\n",total->x1 =((-b)-delta)/(2*a));
      exit(0);
    }
    else if (a == 0)
    {
        printf("Equacao de segundo grau invalida!\n");
        exit(0);
    }
    

   else
   {
        total->x1 = (((-b)-delta)/(2*a));
        total->x2 = (((-b)+delta)/(2*a));
   }

    return total;
}

void mostrar(resultados *total){
    printf("x1:%.2lf\n",total->x1);
    printf("x2:%.2lf\n",total->x2);
}

