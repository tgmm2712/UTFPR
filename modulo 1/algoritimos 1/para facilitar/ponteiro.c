#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void troca(int *a, int *b){
   int *aux;
   *aux = *a;
   *a = *b;
   *b = *aux;
   }

int main(){
    int x, y;

   x=5;
   y=10;

   troca(&x,&y);

   printf("%d\n",x);
   printf("%d\n",y);


    
}