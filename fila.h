#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NO NO;

typedef struct FILA {
    NO *ini;
    NO *fim;
}TFila;

void inicializaFila(TFila *f);

void enfileirar(TFila *f, float dado);

float desinfileirar(TFila *f);

void esvaziarFila(TFila *f);

void imprimirFila(TFila *f);

#endif