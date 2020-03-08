#include<stdlib.h>
#include<stdio.h>
#include<math.h>


float maior_numero(float *a,float *b, float *c){
    if ((*a < *c) && (*b < *c ))
        printf("%f\n",*c);
    else if ((*b < *a) && (*c < *a ))
        printf("%f\n",*a);
    else if ((*c < *b) && (*a < *b ))
        printf("%f\n",*b);

    return 0;

}
int main(){

    float a,b,c;

    scanf("%f %f %f",&a,&b,&c);

    maior_numero(&a,&b,&c);




}