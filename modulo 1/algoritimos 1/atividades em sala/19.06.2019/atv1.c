#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <time.h>


int numero(int a, int b){
     if (b < a) {
     int aux = b;
     b=a;
     a=aux;    
     }

     int resul= (rand()%b)+a;

     printf("numero:%d\n",resul );


}


int main(){
     srand(time(NULL));

    int a,b;
     scanf("%d %d",&a, &b);
     
numero(a,b);
}