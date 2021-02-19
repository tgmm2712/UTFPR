#include <stdio.h>
#include <stdlib.h>


int main(){
    int number,troca;
    scanf("%d",&number);
    int vet[number];
    for(int cont=0;cont<number;cont++){
        scanf("%d",&vet[cont]);
    }
    for(int y = number-1;y>0;y--){
        for(int x = number-1;x>0;x--){
            if(vet[x] < vet[x-1]){
                troca= vet[x];
                vet[x]= vet[x-1];
                vet[x-1] =troca;
            }
        }
        


    }
 for(int cont=0;cont<number;cont++){
        printf("%d ",vet[cont]);
    }
printf("\n");


printf("tanks\n");
}
