#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
int vnc[1200];
int n,i, c, p,t;
scanf("%d",&n);
for (i = 0; i <= n; i++){
vnc[i]= -1;

}
for (i = 0; i <= n; i++){
if (vnc[i] == -1){
    scanf("%d %d", &c, &p);
    t = i-(p);
    vnc[t+1]=c;
    printf("%d",vnc[t]);


}
else{
    printf("-1");
    return 0;
}

}
for (i = 1; i <= n; i++){
printf("%d",vnc[i]);

}
}











