#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    scanf("%d",&x);
    float vet[x];

    for(int i=0;i<x;i++ ){
        scanf("%f",&vet[i]);

    }
    scanf("%d",&y);

     for(int i=0;i<x;i++ ){
         if (vet[i]<y)
         printf("V[%d] = %.2f\n", i,vet[i]);

    }


}