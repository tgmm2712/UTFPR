#include <stdlib.h>
#include <stdio.h>
int main(){
    int x1,x2,aux;
    int total,v=0,vet[5],j=0,h;
    scanf("%d %d",&x1,&x2);
    if (x1>x2){
    aux=x1;
    x1=x2;
    x2=aux;
    }
    h=x2-4; 
    for (int i = x1; i <= x2; i++)
    {
      //  printf("%d\n",i);   
        
        if (i>=h){
            vet[j]=i;
            j++;    

          //  printf("%d %d %d %d\n",j,i,*vet,h);
            
        }
        
        total+= i;
        v++;
         

    }
    printf("%d\n",(total/v));
    int tx=0;
    

    for(int b=0;b<5;b++){
        tx=(*vet+b)+tx;
        //  printf("%d %d\n",tx,j);
    
    }
    printf("%d\n",(tx/j));


}

