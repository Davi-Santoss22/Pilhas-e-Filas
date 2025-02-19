#include "fila.h"

typedef struct NO {
    float dado;
    struct NO *prox;
}NO;

void inicializaFila(TFila *f) {
    f -> ini = NULL;
    f -> fim = NULL;
}

void enfileirar(TFila *f, float dado) {
    NO *ptr = (NO*) malloc (sizeof(NO));
    if(ptr == NULL) {
        printf("Erro de alocacao no NO. \n");
        return;
    } else {
        ptr -> dado = dado;
        ptr -> prox = NULL;

        if(f -> ini == NULL) {
            f -> ini = ptr;
        } else {
            f -> fim -> prox = ptr;
        }
        f -> fim = ptr;
        return;
    }
}

float desinfileirar(TFila *f) {
    NO *ptr = f -> ini;
    float dado;

    if(ptr != NULL) {
        f -> ini = ptr -> prox;
        ptr -> prox = NULL;
        dado = ptr -> dado;
        free(ptr);

    if(f -> ini == NULL){
        f -> fim = NULL;
    }
    return dado;

    } else {
        printf("Fila vazia.\n");
        return 0;
    } 
}

void esvaziarFila(TFila *f) {
    NO *ptr = f -> ini;
    NO *aux;
    while(ptr != NULL) {
        aux = ptr;
        ptr = ptr -> prox;
        free(aux);
    }
    f -> ini = NULL;
    f -> fim = NULL;
}

void imprimirFila(TFila *f) {
    NO *ptr = f -> ini;

    if(ptr == NULL) {
        printf("Fila vazia.\n");
        return;
    } else {
        printf("Fila: ");
        while(ptr != NULL){
            if(ptr -> prox != NULL){
                printf("%.1f ", ptr -> dado);
            }else {
                printf("%.1f", ptr -> dado);
            }
            ptr = ptr -> prox;
        }
        printf("\n");
    }
}
