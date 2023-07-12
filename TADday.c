#include "TADday.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Task tarefa[MAX];
int numero = 0;

void addtarefa() {
  if (numero >= MAX) {
    puts("Número máximo de tarefas alcançado.");
    return;
  }

  struct Task novatarefa;
  printf("Digite o nome da nova tarefa: \n");
  scanf("%*c"); // Consumir o caractere de nova linha pendente
  scanf("%[^\n]", novatarefa.titulo);

  printf("Digite o que realizará: \n");
  scanf("%*c"); // Consumir o caractere de nova linha pendente
  scanf("%[^\n]", novatarefa.descricao);

  tarefa[numero++] = novatarefa;
  printf("Tarefa adicionada com sucesso!\n");
}

void removetarefa() {
  if (numero <= 0) {
    printf("Você não tem tarefas\n");
    return;
  }
  int aux;
  printf("Digite o número da tarefa que deseja remover (1 a %d): ", numero);
  scanf("%d", &aux);
  if (aux < 1 || aux > numero) {
    printf("Número de tarefa inválido.\n");
    return;
  }

  for (int i = aux - 1; i < aux - 1; i++) {
    tarefa[i] = tarefa[i + 1];
  }

  numero--;

  printf("Tarefa removida com sucesso!\n");
}
void mostratarefa() {
  if (numero <= 0) {
    printf("Não há tarefa\n");
    return;
  }
  printf("Lista de Tarefas:\n\n");

  for (int i = 0; i < numero; i++) {
    printf("Tarefa %d:\n", i + 1);
    printf("Título: %s\n", tarefa[i].titulo);
    printf("Descrição: %s\n", tarefa[i].descricao);
    printf("\n");
  }
}

void atualizatarefa() {
  if (numero <= 0) {
    printf("Não há tarefas para atualizar.\n");
    return;
  }

  int aux;

  printf("Digite o número da tarefa que deseja atualizar (1 a %d): ", numero);
  scanf("%d", &aux);

  if (aux < 1 || aux > numero) {
    printf("Número de tarefa inválido.\n");
    return;
  }

  struct Task atualizar;

  printf("Digite o novo título da tarefa: ");
  scanf(" %[^\n]", atualizar.titulo);

  printf("Digite a nova descrição da tarefa: ");
  scanf(" %[^\n]", atualizar.descricao);

  tarefa[aux - 1] = atualizar;

  printf("Tarefa atualizada com sucesso!\n");
}
