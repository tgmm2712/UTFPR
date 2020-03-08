#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
double  numero,rad, total_1,total_2;

scanf("%lf", &numero);

rad=(numero*M_PI)/180.0;

total_1=sin(rad);
total_2=cos(rad);

printf("%lf %lf\n", total_1, total_2);
return 0;

}
