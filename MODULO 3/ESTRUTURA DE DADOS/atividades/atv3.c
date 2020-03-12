#include <stdio.h>
#include <stdlib.h>
#define int_max 2147483600

void merge_sort(int *v,int p,int r){
    if (p<r){
        int q = (p + r)/2; 
    merge_sort(v,p,q);
    merge_sort(v,q+1,r);
    merge(v,p,q,r);
    }

}
void merge(int *v,int p,int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int l[n1+1], r[n2+1];

    v[n1] = int_max;
    v[n2] = int_max;

//copiar vetor
//codicao se o da direita for maior que da esquerda ele armaze no ponteiro, se nao e pega o valor e armazena direto no vetor

    

}
int main(void){


}