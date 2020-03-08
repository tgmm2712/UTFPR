#include <stdio.h>
#include <stdlib.h>

typedef struct inf{
    int num;
    char nome;
    char sobrenome;
    int idade;
    char sexo;
}cliente;


int main(){
    int x;
    printf("informe o valor da tabela:\n");
    scanf ("%d",x);

  cliente vet[x];
    for (int  i = 0; i < x; i++)
    {
        
        scanf("%d %c %c %i %c",&vet[i].num,&vet[i].nome,&vet[i].sobrenome,&vet[i].idade,&vet[i].sexo);

    }
  
    
    for (int  i = 0; i < x; i++)
    {
        
        printf("%d %c %c %i %c",vet[i].num,vet[i].nome,vet[i].sobrenome,vet[i].idade,vet[i].sexo);

    }
}