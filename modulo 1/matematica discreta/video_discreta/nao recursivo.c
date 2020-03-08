#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x,total=1,i;

    printf("digite um numero para ver fatorial:");
    scanf("%d",&x);

    for (i=1; i<=x; i++){
        total=total*i; 
        /*1*2*3*4*x=x! */

    }
    printf("fatorial de %d e %d\n",x,total);


}