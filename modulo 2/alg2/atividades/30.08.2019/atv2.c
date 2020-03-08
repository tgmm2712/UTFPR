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
                vc++;
            break;
            case 'e':   case 'E':
                vc++;
            break;
            case 'i':   case 'I':
                vc++;
            break;
            case 'o':   case 'O':
                vc++;
            break;
             case 'U':  case 'u':
                vc++;
            break;
        }
		
		
		cont++;
	}
		
	
	printf("%d\n",vc);
}
