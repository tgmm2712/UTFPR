#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i;
    int vetor[20];
    for (i = 19; i >= 0; i--){
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i <= 19; i++){
    
            printf("N[%d] = %d\n",i,vetor[i]);
        

 
    }


    return 0;
}