#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente a função 'comp' que recebe dois double e retorna o inteiro 0 se o
dois são iguais, 1 se o primeiro é maior que o segundo e -1 caso
contrário.*/

int comp(double a,double b){
    if(a == b)
        return 0;
    else if (a > b)
        return 1;
    else
    {
        return -1;
    }
    

}

/* Não altere a função main abaixo */
int main() {
    int i, n;
    double a, b;
    
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &a, &b);
        printf("%i\n", comp(a, b));
    }
}