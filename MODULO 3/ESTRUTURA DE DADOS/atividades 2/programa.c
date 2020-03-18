#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trasicao.h"


 int menu (int *sele){
    printf("selecione  uma opcao do menu:\n");
    printf("1-saque\n");
    printf("2-Deposito\n");
    printf("3-saldo\n");
    printf("4-sair\n");
    scanf("%d",sele);
 }


int main(){
    int sele;

menu(&sele);

}
