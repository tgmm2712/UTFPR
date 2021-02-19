#define PILHA_INV 1
#define PILHA_VAZIA 2
#define PILHA_CHEIA 3

typedef struct pilha_int_s pilha_int_t;

pilha_int_t* criar_pilha_int(int capacidade);

int inserir_pilha_int(pilha_int_t *p, int dado);

int remover_pilha_int(pilha_int_t *p, int *dado);

void destruir_pilha_int(pilha_int_t *p);

void top_pilha_int(pilha_int_t *p, int capacidade);
