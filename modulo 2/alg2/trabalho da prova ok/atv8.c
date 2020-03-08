#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int sudoku(){
    int cont=0,cont2=0,t=0;
    int vet[9][9],vet2[9]={1,2,3,4,5,6,7,8,9};
    for (int col=0;col < 9; col++){
        for (int i=0; i<9;i++){
            for (int j=0;j<9; j++){
                scanf("%d",&vet[i][j]);
            }
        }
    }
    for (int k=0;k<9;k++){ //Linha coluna
        for (int i=0; i<9;i++){
            for (int j=0;j<9; j++){
                if ((vet[j][i]) == (vet2[k])){
                    cont++;
                    break;
                }
            }
        } 
    }
    for (int k=0;k<9 ;k+=3){ //3x3
        for (int n=0; n < 9; n += 3){
            for (int i=0; i<9;i++){
                t=0;
                for (int j=0+k;j<3+k; j++){
                    for (int l = 0+n; l < 3+n; l++)
                    {    
                        if ((vet[l][j]) == (vet2[i]) && (t!=1)){
                            cont2++;
                            t++;
                            break;
                        }
                    }   
                }
            } 
        }
    }
  int x;
    if ((cont < 81)&&(cont2 <81 )){           
        x=1;
    }
    else
    {       
        x=0;
    }
    return (x);
}
int resposta(int a){
    if (a==1){
        printf("sudoku errado!\n");
    }
    else
    {
        printf("sudoku certo!\n");
    }
    
}
int main(){
    int a;
    a=sudoku();

    resposta(a);
}