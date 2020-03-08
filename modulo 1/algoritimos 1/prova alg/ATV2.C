#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float  soma(float x,float y){
    x=x+y;

return x;
}



int main(){
    float x,resultado, y;
     scanf("%f",&x);
    scanf("%f",&y);
    
    
    resultado = soma(x,y);
    printf("%f\n",x);

}
