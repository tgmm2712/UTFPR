
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double conversao(double *real, double *dollar){
   *real = *(dollar) * *(real);
}

int main(){
    double meu, dolar;
    printf("Digite sua quantia e o valor do dolar: ");
    scanf("%lf %lf", &meu, &dolar);
    conversao(&meu, &dolar);
    printf("Seu dinheiro em dolar: %lf\n", meu);

    return 0;
}
