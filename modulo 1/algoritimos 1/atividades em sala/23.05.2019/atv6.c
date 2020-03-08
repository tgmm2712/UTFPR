#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
     int c;
     double n1,n2,n3,total=0;
        scanf("%d",&c);
        while (c!=0){
            scanf("%lf",&n1);
            scanf("%lf",&n2);
            scanf("%lf",&n3);
            total = ((n1 * 0.2)+(n2 * 0.3) + (n3 * 0.5));
           
             c--;
            printf("%.1lf\n", total);
            total=0;
            }

          
        }
       
