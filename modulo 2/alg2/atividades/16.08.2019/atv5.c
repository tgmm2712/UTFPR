#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,i,j,q;
    scanf("%d",&x);
    int vet[x];

    for(i=0;i<x;i++ ){
        scanf("%d",&vet[i]);

    }
    
        scanf("%d",&q);
    for(i=0;i<q;i++ ){
        scanf("%d",&y);
        for(j=0;j<x;j++){
            if (vet[j]==y){
                    printf("%d\n",j);
                    goto marca;
                }

            }
        printf("NOT FOUND\n");
        marca:
        continue;

        
                  
    }


}