#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa_s pessoa_t;
typedef struct data_s data_t;

struct data_s
{
    int dia;
    int mes;
    int ano;
};
struct pessoa_s
{
    int cod;
    char nome[64];
    data_t nasc;
};




void print_person(pessoa_t p) {
    printf("%d - %s\nNascimento: %d/%d/%d\n", p.cod, p.nome, p.nasc.dia, p.nasc.mes, p.nasc.ano);
}


void read_person(pessoa_t *p) {
scanf("%d",&p->cod);
scanf(" %[^\n]s",p->nome);
scanf("%d %d %d",&p->nasc.dia,&p->nasc.mes,&p->nasc.ano);
}


int main() {
    pessoa_t p;

    read_person(&p);
    print_person(p);
    
    
}
