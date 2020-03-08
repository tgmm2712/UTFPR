#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implemente a função 'min' que recebe dois double e retorna o menor e função
'max' que recebe dois double e retorna o maior*/

double min (double a, double b){
    if (a<b){
       return a;
    }
    else
    {
        return b;
    }
    

}


double max (double a, double b){
    if (a>b){
       return a;
    }
    else
    {
        return b;
    }
}
/* Não altere a função main abaixo */
int main() {
    int i, n;
    double a, b;
    
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &a, &b);
        printf("%.2lf %.2lf\n", min(a, b), max(a, b));
    }
}