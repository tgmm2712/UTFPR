#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i,x,j=0;
    int vetor[1000];

    scanf("%d", &x);
    

    for (i = 0; i < 1000; i++){
         
         if (j < x){
            vetor[i]=j;
            j++;
         }
         else
         {
            vetor[i]=0;  
           j=1;
         }
         
        

        printf("N[%d] = %d\n",i,vetor[i]);
    }


    return 0;
}