#include<stdlib.h>
#include<stdio.h>
#include<math.h>
float baskara(float *a,float *b, float *c){
    
float delta=(*b**b)-(4**a**c);

float x1= (-*b-(sqrt (delta))/(2**a));
float x2= (-*b+(sqrt (delta))/(2**a));

printf("x´=%.2lf\nx´´=%.2lf\n",x1,x2);
}



int main(void){

float a,b,c;

printf("solucao para baskaras:");
printf("valor de A:");scanf("%lf",&a);
printf("valor de B:");scanf("%lf",&b);
printf("valor de C:");scanf("%lf",&c);

baskara(&a,&b,&c);
}