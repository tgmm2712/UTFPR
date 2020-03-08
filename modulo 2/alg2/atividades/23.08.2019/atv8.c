#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente as funções abaixa para realizar o calculo de polinomios */

/*retorna x1 vezes x2 */
int multiplica (int x1, int x2) {
    /* Seu código aqui */
    return x1 *x2;
}

/*retorna x ao quadrado */
int quadrado (int x) {
    /* Seu código aqui */
    return x*x;
}

/*retorna x ao cubo */
int cubo (int x) {
    /* Seu código aqui */
    return x*x*x;

}

/* retorna ax³ + bx² + cx + d */
int pol_cubo(int a, int b, int c, int d, int x) {
    int total;
    total= (a*pow(x,3)+b*pow(x,2)+(c*x)+d);
    return total;
}

/* Não altere a função main abaixo */
int main() {
    int i, n;
    int  a, b, c, d, x;
    
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        scanf("%i %i %i %i %i", &a, &b, &c, &d, &x);
        printf("%i %i %i %i\n", cubo(x), quadrado(x), multiplica(c,x), pol_cubo(a, b, c, d, x));
    }
}