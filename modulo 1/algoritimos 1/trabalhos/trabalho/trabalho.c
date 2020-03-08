#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  
  typedef struct pessoas{
        char nome[10];
        int idade;
    }dados;


int main(void){
    int i;
   dados p[4];
    

    
   for (i=0; i<2; i++){
        scanf("%s", &(p[i].nome));
        scanf("%d", &(p[i].idade));    

    }

   for (i=0; i<2; i++){
        printf("%s\n", (p[i].nome));
        printf("%d\n", (p[i].idade));    

    }

} 



