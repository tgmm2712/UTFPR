#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int A(int m,int n){

  if (m==0){
    //printf("%d %d\n",m,n);
    return ++n;
  }

  if ((m !=0) && (n==0) ){
   // printf("%d %d\n",m,n);

    return A(m-1,1);
    
  }

  if ((m!=0)&& (n!=0)){
    //printf("%d %d\n",m,n);

   return A(m-1,A(m,n-1));
  }

 
}


int main(){
  int m,n,x;
  scanf("%d",&m);
  scanf("%d",&n);

  
  printf("%d\n",A(m,n));
}