#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


int v[111];
int n=0,i=0;

for (i = 0; i <= 110; i++){

v[i]= (i*i)+v[i-1];
}
while (1){
  scanf("%i", &n);

    if (n == 0)
        break;



printf("%i\n",v[n]);



}
}

