#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int c,x,y,i,total, troca;
scanf("%d",&c);

while (c!=0)
{
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>y)
    {
      troca = x;
      x = y;
      y = troca;  
    }
    
    
    for (i=x+1; i<y; i++){

        if (i%2 != 0){
            total=total+i;
        }

    
    } 
   printf("%d\n",total);
   total = 0;
    c--; 
}





}