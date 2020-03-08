#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,y,total=0;
    scanf("%d",&x);
    int vet[x],vet2[x];
    for(int i=0;i<x;i++ ){
        scanf("%d",&vet[i]);

    }
    for(int i=0;i<x;i++ ){
        scanf("%d",&vet2[i]);

    }
     for(int i=0;i<x;i++ ){
        total= total + (pow (vet[i], vet2[i]));

    }

    printf("%d\n",total);
    

}