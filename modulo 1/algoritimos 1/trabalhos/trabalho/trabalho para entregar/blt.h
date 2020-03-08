typedef struct pessoa
{
  int  cod, ano_de_nascimento, telefone;
  char nome[30], cidade[50];
} dados;

void cadastro(dados *variavel);
int num_cadastro(int *total_alunos);
int listar_alunos(int *total_alunos,dados *vet);
int buscar_aluno(dados *vet, int total_alunos);