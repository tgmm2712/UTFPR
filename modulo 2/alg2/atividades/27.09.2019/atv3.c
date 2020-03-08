#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int vet[x][y],k=0;
    for (int i=0;i <x;i++){
        for (int  j = 0; j < y; j++)
        {
            scanf("%d",&vet[i][j]);

        }
        
    }
     for (int i=0;i <x;i++){
        for (int  j = 0; j < y; j++)
        {
            if (vet[i][j] == vet[i][j+1])
            k+=1;
            if (vet[i][j] == vet[i+1][j])
            k+=1;

        }
        
    }
    printf("%d\n",k);


}
