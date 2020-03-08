#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
   
    int x,cont,y;
    scanf("%d \n",&x);
    char nome[x][32];
     for (int i = 0; i < x; i++)
    {
            fgets(nome[i],32,stdin);
        
    }
    scanf("%d",&y);

  printf("%s",nome[y]);
    
}