#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int i,x;
    int vetor[10];
    scanf("%d", &x);
    printf("N[0] = %d\n",x);
    for (i = 1; i < 10; i++){
     
     x=x+x;   
    printf("N[%d] = %d\n",i,x);

    }
    
    return 0;
}