#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char p[256],t[256];
	int cont=0;
	
	scanf("%[^\n]s",p);

    
    scanf(" %[^\n]s",t);
	 
	while (p[cont] != '\0'){
		printf("%c",p[cont]);
			
		
		
		cont++;
	}
    printf(" ");
     
    cont=0;
    while (t[cont] != '\0'){
		printf("%c",t[cont]);
			
		
		
		cont++;
    }
	printf("\n");
		
	
}
