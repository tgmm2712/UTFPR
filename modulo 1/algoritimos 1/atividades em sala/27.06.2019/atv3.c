#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int formula(int *x)
{
    *x=2*(*x * *x)-4 * *x + 30;



}

int main(){
    int x;

    scanf("%d", &x);

    int vet[x];

    

    formula(&x);
    printf("%d\n",x);

}
