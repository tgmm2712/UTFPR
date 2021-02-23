#include <stdio.h>
#include<stdio.h>

struct ponto2D{
        float x,y;
    };
    typedef struct ponto2D ponto2D_t;


int main(){
    

    ponto2D_t p1;
    
    p1.x = 10;
    p1.y = 15;



    printf("%.2f , %.2f \n",p1.x, p1.y);




    return 0;

}