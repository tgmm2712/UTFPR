#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char p[256];
	int cont=0,n;
    scanf("%d",&n);
    int vet[n],i;

    for (i=0; i< n; i++){
        scanf("%d",&vet[n]);

    }
    
	
	scanf("\n%[^\n]s",p);
	 
	for(i=0;i<n;i++){
       int tag=vet[i];
        printf("%c",p[tag]);

    }	
}
