#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

float n1, n2, n3, n4, ne, media;


scanf("%f %f %f %f", &n1, &n2, &n3, &n4);


media = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.4) + (n4 * 0.1);


if (media >= 7){
    printf("Media: %.1f\n", media);
    printf("Aluno aprovado.\n");
    return 0;
}
else if (media < 5){
    printf("Media: %.1f\n", media);
    printf("Aluno reprovado.\n");
    return 0;
}
else{
    printf("Media: %.1f\n",media);
    printf("Aluno em exame.\n");


    scanf("%f", &ne);
    printf("Nota do exame: %.1f\n", ne);

    media = (media + ne)/2;

        if (media >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
        printf("Aluno reprovado.\n");
        }
}
printf("Media final: %.1f\n", media);


return 0;
}
