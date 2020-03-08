#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char p[256];
	int cont=0,vc=0;
	
	scanf("%[^\n]s",p);
	 
	while (p[cont] != '\0'){
		
        switch (p[cont])
        {
            case 'a' :  case 'A':
            case 'e':   case 'E':
            case 'i':   case 'I':
            case 'o':   case 'O':
            case 'U':  case 'u':
                p[cont]='_';
            break;
        }
		
		
		cont++;
	}
	cont=0;
	
    printf("%s\n",p);
    
	
}
