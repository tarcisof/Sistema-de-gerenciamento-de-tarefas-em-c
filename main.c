#include "TADday.h"
#include <stdio.h>

int main() {
  int op;
  do {
    puts("\t\nOla, como voce vai?\nEsse é o nosso sistema de gerenciamento de "
         "tarefas\n");
    puts("\tSe deseja adicionar da sua lista de tarefas pressione[1]\n\
    Se deseja remover da sua lista de tarefas  pressione [2]\n\
    Se deseja listar todas as suas tarefas pressione [3]\n\
    Se deseja atualizar sua lista [4]\n\
    Se deseja sair [5]");
    scanf("%d", &op);

    switch (op) {
    case 1:
      addtarefa();
      break;
    case 2:
      removetarefa();
      break;
    case 3:
      mostratarefa();
      break;
    case 4:
      atualizatarefa();
      break;
    case 5:
      printf("Encerrando o programa. Adeus!\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }
    printf("\n");
  } while (op != 5);
  return 0;
}