#include<stdio.h>
#include<stdlib.h>
int total(int x,double mat[x][x]){
    int k=0;
    for (int  i = 0; i < x; i++){
        for (int j = 0; j < x; j++)
        {
            if (mat[i][j] == 0)
            k++;
        }
    }

  printf("%d\n",k);
    return (k);

}



int main(){
    int x;

     
   
         
   scanf("%d",&x);
         
   double vet[x][x];
     
   
         
   for (int  i = 0; i < x; i++)
         
   {
         
       for (int j = 0; j <x; j++)
         
       {
         
       scanf("%d\n",&vet[i][j]);
         
       }
         
   }
     total(x,vet);

    
}