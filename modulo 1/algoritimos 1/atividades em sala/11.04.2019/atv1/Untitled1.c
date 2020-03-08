#include <stdio.h>
#include <math.h>

int main(){

int x, y;
float t;

scanf("%d %d", &x, &y);

switch(x){


  case 1:
    t = y * 4.00;
    break;


  case 2:
    t = y * 4.50;
    break;

  case 3:
    t = y * 5.00;
    break;

  case 4:
    t = y * 2.00;
    break;

  case 5:
    t = y * 1.50;
    break;


}
printf("Total: R$ %.2f\n",t);
return 0;
}
