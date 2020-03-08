#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
     int c,i,n,t=0;
        scanf("%d",&c);
        while (c!=0){
            scanf("%d",&n);
            for (i=2; i<=n; i++){
                if ((n%i)== 0) {
                    t=t+1;
                }
                
                

            }
           
            if (t<=1)
            {
                printf("%d eh primo\n",n);
                
            }
            else
            {
                printf("%d nao eh primo\n",n);
                    
            }
            
            
            
            c--;
            t=0;
        }
       







}