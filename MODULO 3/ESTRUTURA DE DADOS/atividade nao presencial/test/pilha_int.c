#include <stdio.h>
#include <stdlib.h>

#include "pilha_int.h"


struct pilha_int_s {
    int qtd;
    int capacidade;
    int *dados;
};

pilha_int_t* criar_pilha_int(int capacidade) {
    pilha_int_t *p = (pilha_int_t*) malloc(sizeof(pilha_int_t));
    if (p == NULL){
        return NULL;
    }
    p->qtd = 0;
    p->capacidade = capacidade;
    p->dados = (int*) malloc(capacidade * sizeof(int));

    if (p->dados = NULL){
        free(p->dados);
        free(p);
    }

    return p;
}

int inserir_pilha_int(pilha_int_t *p, int dado) {
    if (p == NULL)
        return PILHA_INV;
    if (p->qtd == p->capacidade)
        return PILHA_CHEIA;
    p->dados[p->qtd] = dado;
    p->qtd++;

    return 0;
}

int remover_pilha_int(pilha_int_t *p, int *dado) {
    if (p == NULL)
        return PILHA_INV;
    if (p->qtd == 0)
        return PILHA_VAZIA;

    p->qtd--;
    *dado = p->dados[p->qtd];

    return 0;
}

void top_pilha_int(pilha_int_t *p, int capacidade) {
    printf("topo da lista:%d\n",p->capacidade);
}



void destruir_pilha_int(pilha_int_t *p) {
    free(p->dados);
    free(p);
}
