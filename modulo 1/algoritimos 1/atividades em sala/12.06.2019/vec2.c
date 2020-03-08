#include <stdlib.h>
#include <stdio.h>

    #include "vec2.h"

    void print(int *v, int tamanho) {
        int i;
        for(i=0; i < tamanho; i++) {
            if (i!=0){
                printf(", ");
            }
            printf("%lf \n",v[i]);
        }
            printf("\n");

    }
    void add(double *v1,double *v2,double *vr, int  tamanho){
        int i;
        for(i=0; i < tamanho; i++) {
            vr[i]= v1[i] + v2[i];
        
        
        }
        printf("add:");
        printf("%d",vr[i]);

    } 

    void sub(double *v1,double *v2,double *vr, int  tamanho){
          int i;
        for(i=0; i < tamanho; i++) {
            vr[i]= v1[i] - v2[i];
        
        }
        printf("sub:");
        printf("%d",vr[i]);

    }

    void mul(double *v1,double *v2,double *vr, int  tamanho){
     int i;
        for(i=0; i < tamanho; i++) {
            vr[i]= v1[i] * v2[i];
        
        }
        printf("sub:");
        printf("%d",vr[i]);

    }
    

void dot(double *v1,double *v2,double *vr, int  tamanho){
     int i;
        for(i=0; i < tamanho; i++) {
            vr[i]= v1[i] * v2[i];
        
        }
        printf("sub:");
        printf("%d",vr[i]);

    }
    

