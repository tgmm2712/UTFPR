#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int par(int *vet, int *x){
    for (int i=0; i < *x; i++)
    if ((vet[i]%2)==0){
        printf("%d ",vet[i]);
    }

    printf("\n");

    return 0;

}
int main(){
    int x;

    scanf("%d", &x);

    int vet[x];

    for (int i=0;i<x;i++){
        scanf("%d",&vet[i]);
    }

    par(vet, &x);

}

