#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente a função print abaixo que imprime na saída padrão uma linha com a
mensagem "Executado" */

void print() {
    printf("Executado\n");
}

/* Não altere a função main abaixo */
int main() {
    int i, n;
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        print();
    }
}
