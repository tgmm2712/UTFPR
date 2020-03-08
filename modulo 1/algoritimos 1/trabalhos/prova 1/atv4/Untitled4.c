#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
double n1;
int t;
scanf("%lf", &n1);


t=n1;
n1= n1 - t;

printf("%d %lf", t, n1);

return 0;
}
