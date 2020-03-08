#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i;
    double x;
    double vetor[1000];

    scanf("%lf", &x);
    
     vetor[0]=x;
     printf("N[%d] = %.4lf\n",i,vetor[0]);

    for (i = 1; i < 100; i++){
         
       vetor[i]=(x/2.00);        
        x=(x/2.00);
        printf("N[%d] = %.4lf\n",i,vetor[i]);
    }


    return 0;
}