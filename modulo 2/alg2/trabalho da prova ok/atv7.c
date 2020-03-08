#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

        char nome1[100],nome2[100];

        fgets(nome1,sizeof nome1,stdin);
        fgets(nome2,sizeof nome2,stdin);

        strcat(nome1,nome2);
        for (int  i = 2; i < (strlen(nome1)); i++)
        {
            if (nome1[i]!= '\n')
            printf("%c",nome1[i]);
        }
        printf("\n");
        



}
