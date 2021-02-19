#include <stdio.h>
#include <stdlib.h>

#include "pilha_int.h"

int main() {
    pilha_int_t *p = criar_pilha_int(32);


    int x, s;

    inserir_pilha_int(p, 1);
    inserir_pilha_int(p, 3);
    inserir_pilha_int(p, 5);

    s = remover_pilha_int(p, &x);
    printf("%d: %d\n", s, x);
    
    inserir_pilha_int(p, 4);

    top_pilha_int(p,5);

    s = remover_pilha_int(p, &x);
    printf("%d: %d\n", s, x);

    s = remover_pilha_int(p, &x);
    printf("%d: %d\n", s, x);

    s = remover_pilha_int(p, &x);
    printf("%d: %d\n", s, x);
    
    s = remover_pilha_int(p, &x);

    

    if (s == PILHA_VAZIA)
        printf("Nao ha mais itens\n");
    else
        printf("%d\n", x);

    destruir_pilha_int(p);

    return 0;
}
