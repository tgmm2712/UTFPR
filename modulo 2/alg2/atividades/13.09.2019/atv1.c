#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;
    scanf("%d", &x);
    double vet[x][x];
    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            scanf("%lf",&vet[i][j]);
        } 
      
    }
 for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            
            printf("%.1lf",vet[i][j]+vet[i][j]);
            if (j != x-1){
                printf(" ");
            }
        } 
        printf("\n");
    }

    




}