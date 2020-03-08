#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10],cont=0,total,soma;

    for (int i=0; i<10; i++){
      scanf("%d",&vet[i]);
        if (vet[i]>10){
            cont++;

        soma=vet[i]+soma;
        }
        
        

    }
    total=soma/cont;
    printf("valores maior que 10 sao:%d, e a media dos valores sao:%d \n",cont,total);
}