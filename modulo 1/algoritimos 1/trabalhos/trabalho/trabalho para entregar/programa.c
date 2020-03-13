#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "blt.h"

int tela(int *x)
{
  printf("_______________________________________________________\n");
  printf("Digite uma das opção correspondente:\n");
  printf("Para utilizacao desse programa,cadastrar primeiro os alunos:\n");
  printf("(1)cadastro de alunos\n");
  printf("(2)exibir alunos cadastrados\n");
  printf("(3)procurar id\n");
  printf("(4)sair do programa\n");
  printf("_______________________________________________________\n");
  scanf("%d", x);
}

int main()
{

  int total_alunos, x = 0, id;

  while (x != 4)
  {

    tela(&x);

    dados vet[100];
    switch (x)
    {
    case (1):

      num_cadastro(&total_alunos);

      for (int i = 0; i < total_alunos; i++)
      {

        cadastro(&vet[i]);
      }

      break;
    case (2):

      listar_alunos(&total_alunos, vet);

      break;

    case (3):

      buscar_aluno(vet, total_alunos);

      break;

    default:

      printf("\nescolha uma das opcao correta!\n");

      break;
    }
  }

  printf("\n\n\n\n\n\nobrigado por usar e ste programa!\n Autor:Tiago Mantovani Malaguti e Maikon Josef Rosa\n\n\n\n\n");
}