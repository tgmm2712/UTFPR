#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente a função fatoracao (no fim do arquivo) que lê da entrada padrão
um número inteiro e retorna o fatorial deste número */

/* Na linha abaixo apenas declare a função, ou seja faça apenas o protótipo */
/* Seu código aqui */
int fatoracao () {
    int x,total=1;
    scanf("%d",&x);    
    for (int i=1;i<=x;i++){

        total=total*i;
      
    }   
      return (total);

    
}

/* Não altere a função main abaixo */
int main() {
    int i, n;
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        printf("%i\n", fatoracao());
    }
}


/* Na linha abaixo defina a função, ou seja faça a sua implementação */
