#include <stdio.h>
#include <stdlib.h>
#define int_max 2147483600

void merge(int *array,int inic,int meio,int fim);
void merge_sort(int *vetor,int inic,int fim);

void merge_sort(int *vetor,int inic,int fim){
    
   
    
    if (inic<fim){
        int meio = (inic + fim)/2; 
    merge_sort(vetor,inic,meio);
    merge_sort(vetor,meio+1,fim);
    merge(vetor,inic,meio,fim);
    }

}

void merge(int *array,int inic,int meio,int fim){
    int n1 = meio-inic+1;
    int n2 = fim-meio+1;
    int direito[n1+1],esquerdo[n2+1];
    array[n1] = int_max;
    array[n2] = int_max;


for(int i=inic, j = 0;i<=meio;i++, j++){
    esquerdo[j]=array[i];
}
int cont=0;
for(int i=(fim-meio+1);i<fim;i++){
    direito[cont]=array[i];
cont++;
}
//copiar vetor
int i = 0, j = 0, k =0;
for(int i = inic;i<fim;i++ ){
    if(direito[i] < esquerdo[i]){
        array[i]=direito[j];
        j++;
    }
    else
    {
        array[i]=esquerdo[k];
        k++;
    }
}
    
}

//codicao se o da direita for maior que da esquerda ele armaze no ponteiro, se nao e pega o valor e armazena direto no vetor

int main(void){
    int vetor[5] = {2,3,4,1,5};
    merge_sort(vetor,0,4);

 for(int i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }
}