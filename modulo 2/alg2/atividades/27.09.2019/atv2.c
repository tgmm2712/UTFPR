#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char frase[100];
    int i;


    fgets(frase,sizeof frase,stdin);

     if ((frase[0] <= 'z' && (frase[0] >= 'a'))){
            
                frase[0] += 'A' - 'a';
                
        }
   
        
    


    for (i = 0; i < strlen(frase) ; i++)
    {
        if ((frase[i+1] <= 'z' && (frase[i+1] >= 'a'))){
            if (frase[i] == ' '){
                frase[i+1] += 'A' - 'a';
                
            }
        }
    }

    printf("%s",frase);

}



