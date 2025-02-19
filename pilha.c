#include "pilha.h"

typedef struct NO{
    char dado;
    struct NO *prox;
}NO;

void inicializaPilha(TPilha *p){
    p -> topo = NULL;
}

void empilha(char dado, TPilha *p){
    NO *ptr = (NO*) malloc(sizeof(NO));
    if(ptr == NULL){
        printf("Erro de alocacao do NO\n");
        return;
    }else{
        ptr -> dado = dado;
        ptr -> prox = p -> topo;
        p -> topo = ptr;
    }  
}

char desempilha(TPilha *p){
    NO* ptr = p -> topo;
    char dado;

    if(p -> topo == NULL){
        printf("Pilha vazia\n");
        return -1;
    }else {
        p -> topo = ptr -> prox;
        ptr -> prox = NULL;
        dado = ptr -> dado;
        free(ptr);
    }
}

void esvaziarPilha(TPilha *p){
    NO* ptr = p -> topo;
    while(ptr != NULL){
        p -> topo = ptr -> prox;
        ptr -> prox = NULL;
        free(ptr);
        ptr = p -> topo;
    }
}

void imprimePilha(TPilha *p){
    NO *ptr = p -> topo;
    if(p -> topo == NULL){
        printf("Pilha vazia\n");
        return;
    }else {
        while(ptr != NULL){
            if(ptr -> prox != NULL){
                printf("%c ", ptr -> dado);
            }else {
                printf("%c", ptr -> dado);
            }
            ptr = ptr -> prox;
        }
        printf("\n");
    }
}