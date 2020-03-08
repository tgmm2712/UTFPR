#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente a função multiplicacao (no fim do arquivo) que lê da entrada padrão
dois números inteiros e retorna o resultado da multiplicação destes números */

/* Não altere a declaração abaixo */
int multiplicacao();

/* Não altere a função main abaixo */
int main() {
    int i, n;
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        printf("%i\n", multiplicacao());
    }
}

int multiplicacao () {
   int x,y;
   scanf("%d %d",&x,&y);
   return (x*y);
}