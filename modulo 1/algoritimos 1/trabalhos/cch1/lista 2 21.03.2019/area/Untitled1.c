#include <stdio.h>

int main (void)
{
double raio, area, pi;
pi = 3.14159;

scanf("%lf", &raio);

area = pi * (raio * raio);

printf("A=%.4lf\n", area);

return 0;

}
