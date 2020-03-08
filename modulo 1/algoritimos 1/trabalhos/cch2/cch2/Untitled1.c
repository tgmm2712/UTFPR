#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

 int j , i;
 int vetor_1[3], vetor_2[3];
 int aux;



 for (i=0; i<=2; i++){

 scanf("%d", &vetor_1[i]);
 vetor_2[i]=vetor_1[i];



 }
  for (j=0; j< 3; j++){
    for(i=0; i<3; i++){
     if (vetor_1[i] > vetor_1[i+1]){
            aux = vetor_1[i];
            vetor_1[i]=vetor_1[i+1];
            vetor_1[i+1]=aux;
     }
    }
 }
 for (j=0; j<=2; j++){


  printf("%d\n", vetor_1[j]);
}
printf("\n");
for (j=0; j<=2; j++){


  printf("%d\n", vetor_2[j]);
}

}
