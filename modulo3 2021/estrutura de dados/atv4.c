#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>


struct ponto2D{
        float x,y;
};

typedef struct ponto2D ponto2D_t;

ponto2D_t* ponto2D_new(){
    ponto2D_t *p1 = (ponto2D_t*) malloc(sizeof(ponto2D_t));
}

ponto2D_t ponto_sum( ponto2D_t* p1, ponto2D_t* p2, ponto2D_t* pr){
    if (pr == NULL){
        pr = ponto2D_new();
    }
    pr->x = p1->x + p2->x;
    pr->y = p1->y + p2->y;
    




}

int main(){
    

    ponto2D_t  *p1 = ponto2D_new();
    
    p1-> x = 10;
    p1-> y = 15;




    printf("%.2f , %.2f \n",p1->x, p1->y);




    return 0;

}