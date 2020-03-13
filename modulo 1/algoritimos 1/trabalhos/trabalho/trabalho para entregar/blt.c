#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "blt.h"

void cadastro(dados *variavel)
{

	printf("\n\n\n\ncodigo:");
	scanf("%d", &variavel->cod);
	printf("nome:");
	scanf("%s", variavel->nome);
	printf("ano de nascimento:");
	scanf("%d", &variavel->ano_de_nascimento);
	printf("telefone:");
	scanf("%d", &variavel->telefone);
	printf("cidade:");
	scanf("%s", variavel->cidade);
	printf("\n\n\n\n");
}

int num_cadastro(int *total_alunos)
{

	printf("favor digitar numero de alunos que dezeja cadastrar:");
	scanf("%d", total_alunos);
}

int listar_alunos(int *total_alunos, dados *vet)
{

	printf("Lista de alunos:\n");
	int j;

	for (j = 0; j < *total_alunos; j++)
	{

		printf("%d %s %d %d %s\n", vet[j].cod, vet[j].nome, vet[j].ano_de_nascimento, vet[j].telefone, vet[j].cidade);
	}
}

int buscar_aluno(dados *vet, int total_alunos)
{

	int id;
	printf("\n\nDigite o id do aluno cadastrado:");
	scanf("%d", &id);

	for (int k = 0; k < total_alunos; k++)
	{

		if (vet[k].cod == id)
		{
			printf("%d %s %d %d %s\n", vet[k].cod, vet[k].nome, vet[k].ano_de_nascimento, vet[k].telefone, vet[k].cidade);
			return 0;
		}
	}
	printf("\n\n\n\nnao encontrado!!\n\n\n");

	return -1;
}