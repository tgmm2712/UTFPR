#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int executar(int t){
  int i=1,z=1;
   for(i=t; i > 1; i--){
       z=i*z;
   }

printf("%d\n",z);

}




int main(void){
int x,i, t ,u;
scanf("%d",&x);

for (i=0; i < x; i++){
 
 scanf("%d", &t);
 executar(t);

}

return 0;


}