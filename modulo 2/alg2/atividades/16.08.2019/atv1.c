#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    scanf("%d",&x);
    float vet[x];

    for(int i=0;i<x;i++ ){
        scanf("%f",&vet[i]);

    }

    for(int i=0;i<x;i++ ){
        printf("V[%d] = %.1f\n", i,vet[i]);
    }

    for(int i=(x-1);0<=i;i--){
        printf("V[%d] = %.1f\n", i,vet[i]);
    }

}