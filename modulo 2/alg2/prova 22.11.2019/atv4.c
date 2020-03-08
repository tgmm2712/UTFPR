#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data data_t;
typedef struct endereco endereco_t;
typedef struct usuario usuario_t;

struct data
{
    int dia;
    int mes;
    int ano;
};

struct endereco
{
    char rua[50];
    char bairro[50];
    int cep;
    char cidade;
    char estado;
};

struct usuario
{
    char nome[50];
    endereco_t;
    data;
};
 void aloc(int x){

int *p = ((int) malloc (sizeof(int)*x));

return p;
 }



int main()
{
    
    int p[5];
    struct cad;

    int x = aloc(p);
}