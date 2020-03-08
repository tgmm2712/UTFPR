#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int x, cont=1;
    scanf("%d",&x);
   do{
        printf("%d\n",x*cont);
        cont++;

    } while (cont != 11); 

}