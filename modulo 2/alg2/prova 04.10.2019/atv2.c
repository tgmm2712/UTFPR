#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void xp(int a,double *vet,int *p_maior){
double valor=0;
    for (int i = 0; i < a; i++)
    {    
        if (vet[i] > valor){
            if (vet[i] != valor){
            *p_maior = i;
            valor=vet[i];
            }
        }        
    }

}


int main(){

    int a=5;


    double vet[a];
    vet[0]=6.5;
    vet[1]=7.5;
    vet[2]=3.5;
    vet[3]=5.5;
    vet[4]=7.5;
    int p_maior=0;
    xp(a,vet,&p_maior);

}