// codigo para compilar o programa
// gcc main.c pilha.c pilha.h -o teste.exe

#include "pilha.h"
#define N 100

int main(){

    TPilha *p1 = (TPilha*) malloc (sizeof(TPilha));
    if(p1 == NULL){
    printf("Erro de alocacao da pilha\n");
    exit(0);
    } else {
        inicializaPilha(p1);


        char comando[N];
        fgets(comando, N, stdin);

        
        for (int i = 0; i < N; i++){
                if(comando[i] == '-' && comando[i+1] == 'f'){
                    i = N;
                }

                if(comando[i] == '-' && comando[i+1] == 's'){
                    if(p1 -> topo != NULL){
                        printf("Pilha: ");
                    }
                    
                    imprimePilha(p1);
                }
    
                if(comando[i] == '-' && comando[i+1] == 'c'){
                    esvaziarPilha(p1);
            }
    
                if(comando[i] == '-' && comando[i+1] == 'i'){
                    char dado = comando[i+3];
                    empilha(dado, p1);
                }
    
                if(comando[i] == '-' && comando[i+1] == 'r'){
                    char dado = desempilha(p1);
                }
        }
        
    }
    system("pause");

}