#include <stdio.h>
#include <stdlib.h>
int inverter(int n){
    int vet[n];

    for (int i=0; i< n;i++){
        scanf("%d",&vet[i]);

    }

    for (int i=n-1; 0 <= i;i--){
        
            printf("%d",vet[i]);
        if (i != 0 ){
            printf(" ");

        }
        

    }
    printf("\n");
    
}

int main (){
    int n;
scanf("%d",&n);

inverter(n);
}