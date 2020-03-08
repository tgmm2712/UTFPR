#include <stdio.h>


int main (void)
{
int nf, th;
double vh, total;


scanf("%d", &nf);
scanf("%d", &th);
scanf("%lf", &vh);

total = th * vh ;

printf("NUMBER = %d\n", nf);
printf("SALARY = U$ %.2lf\n", total);



return 0;


}
