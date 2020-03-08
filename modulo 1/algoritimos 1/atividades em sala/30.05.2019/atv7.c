#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i,x;
    int vetor[10];
   
    for (i = 0; i < 10; i++){
     
     scanf("%d", &vetor[i]);
        if (vetor[i] <= 0){
            vetor[i]= 1;
        }
        printf("X[%d] = %d\n",i,vetor[i]);
    }
    
    return 0;
}