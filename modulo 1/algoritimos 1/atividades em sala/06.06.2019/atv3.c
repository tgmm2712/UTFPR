#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int executar(int t,int u){
    t=u*t;
printf("%d\n",t);

}




int main(void){
int x,i, t ,u;
scanf("%d",&x);

for (i=0; i < x; i++){
 
 scanf("%d %d", &t, &u);
 executar(t,u);

}

return 0;


}
 