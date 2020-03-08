#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    float a, b, c, x, delta, deltaP, deltaN;

    scanf("%f %f %f", &a ,&b ,&c);

    x = (((b*b) - (4 * a * c)));

    if (x <= 0 || a == 0){
        printf("Impossivel calcular\n");
    }
    else{

        delta = sqrt(x);

        deltaP = (-b + (delta)) / (2 * a);

        deltaN = (-b - (delta)) / (2 * a);


        printf("R1 = %.5f\n", deltaP);
        printf("R2 = %.5f\n", deltaN);
    }
return 0;
}
