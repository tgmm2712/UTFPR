#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[52];
    char cpf[15];
    char data_n[20];
};

struct pessoa *alocar(int quantidade)
{
    struct pessoa *vet = (struct pessoa *)malloc(quantidade * sizeof(struct pessoa));
    return vet;
}

struct pessoa *preecher(struct pessoa *vet, int quantidade)
{
    for (int i; i < quantidade; i++)
    {
        scanf("%s %s %s", vet[i].nome, vet[i].cpf, vet[i].data_n);

        return vet;
    }

    struct pessoa *imprime(struct pessoa * vet, int quantidade)
    {
        for (int i; i < quantidade; i++)
        {
            printf("%s %s %s", vet[i].nome, vet[i].cpf, vet[i].data_n);

            
        }
    }
    struct pessoa *buscar(struct pessoa * vet, int quantidade)
    {
        for (int i; i < quantidade; i++)
        {

            if 
            printf("%s %s %s", vet[i].nome, vet[i].cpf, vet[i].data_n);

            
        }
    }

    ///para string(strcmp(p[i].nome,nome)==0){}

    int main()
    {

        int quantidade;
        scanf("%d", &quantidade);

        struct pessoa *vet = alocar(quantidade);

        preecher(vet, quantidade);

        imprime(vet, quantidade);

        buscar(vet, quantidade);
    }