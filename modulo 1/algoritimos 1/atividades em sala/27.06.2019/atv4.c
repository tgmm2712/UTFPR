#include<stdlib.h>
#include<stdio.h>
#include<math.h>




int main(){
    char x=-1;
    int total=0;
    scanf("%c",&x);
    while (x != 'A' && x != 'a')
    {
      
     scanf("%c",&x);      
      if (x != '\n'){
         total++;
      }


        
    }
    printf("%d\n",total);
    

}
