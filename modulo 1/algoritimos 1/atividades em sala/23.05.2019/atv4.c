#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
        int c,n, total=0,total2=0;
        scanf("%d",&c);
        while (c!=0){
            scanf("%d",&n);
            if ((n>=10)&&(n<=20)){
                total = total + 1;
            }
            else
            {
                total2 = total2+1;
            }
            
            c--;
        }
        printf("%d in\n%d out\n",total,total2);


}