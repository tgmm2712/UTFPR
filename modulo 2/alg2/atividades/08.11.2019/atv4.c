#include <stdio.h>
#include <stdlib.h>
 void f(int v[], int n){
     if (n == 0) {
         printf("%d",v[n]);
     }
     else
     {
         f(v,n-1);
         printf(" %d",v[n]);
         
     }
     


 }