#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x,i;
    scanf("%d",&x);
    int vet[x];
    for(i=0;i<x;i++){
        scanf("%d",&vet[i]);
    }
    for(i=x-1;i>=0;i--){
       printf("%d\n",vet[i]);
    }
}

