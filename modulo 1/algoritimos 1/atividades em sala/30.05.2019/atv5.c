#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i,x,j,p=0;
    

    scanf("%d", &x);
    int vetor[x];
    j=10001;
    for (i = 0; i < x; i++){
         
       scanf("%d", &vetor[i]);
            
       if (j > vetor[i]){
           j=vetor[i];
           p=i;
       }
    }
    printf("Menor valor: %d\nPosicao: %d\n",j,p);

    return 0;
}