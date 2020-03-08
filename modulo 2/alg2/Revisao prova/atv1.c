#include<stdio.h>
#include<stdlib.h>
int* alocar(int x){
    int *y;
     y = (int*) malloc (sizeof(int)* x);
    return y;
}




int main(){
    int x,*y;
    scanf("%d",&x);
    y = alocar(x);

    for (int  i = 0; i < x; i++)
    {
        y[i]=i;
    
    }
    
    for (int  i = 0; i < x; i++)
    {
     printf("%d\n",y[i]);
    
    }
}