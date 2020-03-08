#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char funt(char *palavra,char *frase){
    int x,y,i=0,k=0;
    char cont;
    x=strlen(palavra);
    y=strlen(frase);

    for (int i=0; i<y;i++){

        if (palavra[i] == frase[i]){
            for(int j=0;j<x;j++){
                if (palavra[j+i] == frase[j+i]){
                    k++;
                }
                    
                    
                printf("%d %d\n",k,x);
            }
            if (k==x-1){
                printf("sim\n");
                
            }
        }
    }    
}



    








int main(){
    char palavra[100],frase[100];


    fgets(palavra,100,stdin);
    fgets(frase,100,stdin);



funt(palavra,frase);    



}