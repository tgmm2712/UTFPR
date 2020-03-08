#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente as funções de fatoracao (no fim do arquivo) que recebe como parâmetro
um número inteiro e retorna o fatorial deste número. E a função soma_fat que
recebe como parâmetro um numero x e utiliza a função fatoracao para calcular
f(x) = x! + (x-1)! + ... + 2! + 1!
Exemplos:
x = 3 -->      3! + 2! + 1! =      6 + 2 + 1 = 9
x = 4 --> 4! + 3! + 2! + 1! = 24 + 6 + 2 + 1 = 33
*/

int fatoracao(int);
int soma_fat(int);

/* Não altere a função main abaixo */
int main() {
    int i, n, x;
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        scanf("%i", &x);
        printf("%i\n", soma_fat(x));
    }
}


/* Na linha abaixo defina a função fatoracao, ou seja faça a sua implementação */
int fatoracao (int y) {
    int total2=1;
    for (int j=1;j<=y; j++){
        total2=j*total2;
    }

  
    return total2;
}

/* Na linha abaixo defina a função soma_fat, ou seja faça a sua implementação */
int soma_fat (int x) {
    int total=0,y;
    for (int i=1; i<=x; i++){
        y =  fatoracao(i);
        total =total  + y;
       
    }
    return total;
}
