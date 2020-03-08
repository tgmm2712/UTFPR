#include <stdlib.h>
#include <stdio.h>

int cedulas(int n){
    int j=0,k=0,i=0,l=0,m=0;
    if ((n == 3) || n == 1)
    {
        printf("valor invalido!\n");
        return 0;
    }
    

     if ((n%2)!=0){
            n=n-5;
            l+=1;
        }
    do{
        if (n>=100)
        {
            n=n-100;
            j+=1;
            
        }
        else if (n>=50)
        {
            n=n-50;
            k+=1; 
            
        }
        else if (n>=10) //aki
        {
            n=n-10;
            i+=1; 
            
        }
        else if (n>=2)
        {
            n=n-2;
            m+=1; 
             
        }
        else
        {

            printf("100= %d\n50= %d\n10= %d\n5= %d\n2= %d\n",j,k,i,l,m);
            return 0;
        }   
    }while (n >= 0);
}

int main(){
    int n;
    scanf("%d",&n);
    cedulas(n);
}