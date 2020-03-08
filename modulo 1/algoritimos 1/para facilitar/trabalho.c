#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a=0, b = 15;

    do{
        if (b%2 == 0){
            a++;
            if (a == 10){
                break;
            }
        }
        b--;
    }while (b>= 0);
    
      printf("valor de a:%d\n",a);
      printf("valor de bls:%d\n",b);
    
  return 0;
}