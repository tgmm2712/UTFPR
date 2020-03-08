#include <stdio.h>

int main(void){


double a, b, c, total;

scanf("%lf", &a);
scanf("%lf", &b);

c = (a * 0.35) + (b * 0.75);

total = 10 * (c/11) ;

printf("MEDIA = %.5lf\n", total);
return 0;

}
