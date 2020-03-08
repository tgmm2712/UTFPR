#include<stdio.h>
#include<stdlib.h>
int fatorial (int x){
  
  int total=1;
    
  for (int i=1; i<=x; i++){
        total=total*i;
  }
  return (total) ;
}

int main(){
    int y,resposta;
    scanf("%d",&y);
    resposta = fatorial(y);
        printf("%d\n",resposta);

   

}