#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,i,t;
    double tl;

    scanf("%d",&x);
    scanf("%d",&t);

    for (i=t; i<=x; i++){
        if  (i!=0){
        tl=((i-21)%12);
        printf ("%.3lf  ",tl);
        printf ("%d\n",i);
        }
        }
    } 




