#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
    scanf("%d",&x);
    int vet[x];

    for(int i=0;i<x;i++ ){
        scanf("%d",&vet[i]);

    }
      for(int i=0;i<x;i++ ){
        if ((vet[i]%2)==0){
            printf("V[%d] = %d\n", i,vet[i]);

        }
    }

}