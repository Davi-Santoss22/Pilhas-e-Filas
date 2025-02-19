#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct NO NO;
typedef struct PILHA{
    NO *topo;
}TPilha;

void inicializaPilha(TPilha *p);

void empilha(char dado, TPilha *p);

char desempilha(TPilha *p);

void esvaziarPilha(TPilha *p);

void imprimePilha(TPilha *p);

#endif