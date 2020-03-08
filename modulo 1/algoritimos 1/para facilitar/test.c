#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char vet[3][3];

   vet[0][0]='x';
    vet[0][1]=' ';
    vet[0][2]='o';  
    vet[1][0]=' ';
    vet[1][1]='x';
    vet[1][2]=' ';
    vet[2][0]=' ';
    vet[2][1]=' ';
    vet[2][2]='O';

    /*0-0 0-1 0-2
      1-0 1-1 1-2
      2-0 2-1 2-2*/


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            printf("%c ",vet[i][j]);
        }

        printf("\n");
    }



return 0;
}