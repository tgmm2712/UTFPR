#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,i,soma=0;

    scanf("%d %d", &a, &b);

    for (i=a; i < b; i++){
        if (((i%4)!=0) && ((i%5)!=0)){
            printf("%d\n",i);
            soma++;
        }
    }

    
    printf("total das divisores: %d\n", soma);



}