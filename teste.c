#include <stdio.h>
#include <stdlib.h>

int resultado(int  *x, int *y){
int a,b;
a=*x+*y;
b=*x-*y;
*x=a;
*y=b;

}



int main() {
    int x=1,y=2;
    int soma, sub;
    scanf("%d %d",&x,&y);


    resultado(&x,&y);
    printf("%d\n%d\n",x,y);


}