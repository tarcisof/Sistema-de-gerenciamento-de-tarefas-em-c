#ifndef TADDAY_H
#define TADDAY_H
#define MAX 100

struct Task {
  char titulo[100];
  char descricao[200];
};

/*
 * Tenta adicionar tarefa na lista.
 */
void addtarefa();

/*
 * Tenta remover tarefa na lista.
 */
void removetarefa();

/*
 * Tenta atualizar tarefa na lista.
 */
void atualizatarefa();

/*
 * Tenta mostrar tarefa na lista.
 */
void mostratarefa();

#endif