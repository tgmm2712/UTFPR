#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

int c,x,i,soma;

    scanf("%d", &c);

    while (c != 0)
    {
        scanf("%d",&x);
        
        for (i=1; i< x; i++){
            if ((x%i)== 0) {
                soma = soma + i;

            }
        }

        if (soma == x){
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
        


        c--;
        soma = 0;
    }






}