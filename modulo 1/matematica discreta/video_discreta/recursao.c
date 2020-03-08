#include <stdio.h>
#include<stdlib.h>

int fat (int x){
    int total=1;
    if (x==0){
        return 1;
    }
    else
    {
        total=(x * (fat(x-1)));/*eliminar a estrutura de repetição utilizando  esta formula e essa soma*/
        return (total);
    }

}

int main(){
    int x,fatorial;

    printf("digite o numero para fatorial:");
    scanf("%d",&x);

    fatorial=fat(x);/*reaproveitamento de codigo */
    
    printf("fatorial de %d e %d\n",x,fatorial);

}/*eliminar quantidade de variaveis, e agilizar o codigo *