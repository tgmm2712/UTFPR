#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int x=-1,total,i;

    
        while (x!=0){
            
                scanf("%d",&x);
                if (x == 0){
                    break;
                }
            for(i=x; i<=x+9;i++){
                if ((i%2)==0){
                    total = total + i;
                }
        



            }
            printf("%d\n",total);
            total = 0;
        }




}
