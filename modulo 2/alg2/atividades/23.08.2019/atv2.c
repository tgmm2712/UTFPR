#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Declare e implemente a função soma que lê da entrada padrão dois números
inteiros e imprime uma linha com o resultado da soma destes números */

/* Seu código aqui */

int soma (){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",x+y);

}


/* Não altere a função main abaixo */
int main() {
    int i, n;
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        soma();
    }

}