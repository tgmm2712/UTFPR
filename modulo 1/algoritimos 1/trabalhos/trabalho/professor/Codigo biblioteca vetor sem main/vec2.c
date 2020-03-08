#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "vec2.h"

void print(double *v, int tamanho) {
    int i;
    for (i=0; i<tamanho; i++) {
        if (i!=0) {
            printf(", ");
        }
        printf("%lf", v[i]);
    }
    printf("\n");
}

void add(double *v1, double *v2, double *vr, int tamanho) {
    int i;
    for (i=0; i<tamanho; i++) {
        vr[i] = v1[i] + v2[i];
    }
}

void sub(double *v1, double *v2, double *vr, int tamanho) {
    int i;
    for (i=0; i<tamanho; i++) {
        vr[i] = v1[i] - v2[i];
    }
}

void mul(double *v1, double escalar, double *vr, int tamanho) {
    int i;
    for (i=0; i<tamanho; i++) {
        vr[i] = v1[i] * escalar;
    }
}

double dot(double *v1, double *v2, int tamanho) {
    int i;
    double result = 0.0;
    for (i=0; i<tamanho; i++) {
         // result = result + v1[i] * v2[i];
         result += v1[i] * v2[i];
    }

    return result;
}

double modulo(double *v1, int tamanho) {
    int i;
    double sum = 0.0;
    for (i=0; i<tamanho; i++) {
         sum += v1[i] * v1[i];
    }

    return sqrt(sum);
}













