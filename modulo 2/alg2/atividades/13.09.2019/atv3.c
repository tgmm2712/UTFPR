#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&vet[i][j]);
        } 
      
    }
 for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            
            printf("%d",vet[j][i]);
            if (j != 3-1){
                printf(" ");
            }
        } 
        printf("\n");
    }

    




}