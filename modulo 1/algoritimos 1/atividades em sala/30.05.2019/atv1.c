#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i;
    double vetor[100];
    for (i = 0; i< 100; i++){
        scanf("%lf", &vetor[i]);
        if (vetor[i] <= 10){
            printf("A[%d] = %.1lf\n",i,vetor[i]);
        }


    }

    return 0;
}