#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int cont=0; 
    char palavra[256];
    scanf("%[^\n]s", palavra);

    while(palavra[cont] != '\0'){
        if (palavra[cont] != ' '){
 
        palavra[cont] = palavra[cont]+3;

        if (palavra[cont] > 'Z'){

            palavra[cont] = palavra[cont]-26;

        }
        }
        else
        {
            palavra[cont]=' ';
        }
        
    
        
        cont++;
    }
    printf("%s \n",palavra);






}