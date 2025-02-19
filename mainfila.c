// codigo para compilar o programa
// gcc main.c fila.c fila.h -o teste.exe

#include "fila.h"
#define N 100

int main()
{
	TFila *f1 = (TFila*) malloc (sizeof(TFila));
    char comando;
    float valor;

    if (f1 == NULL){
        printf("Erro alocacao.\n");
        exit (-1);
    } else {
        inicializaFila(f1);

        while (scanf(" %c", &comando) != EOF) {
            switch (comando) {
                case 's':
                    imprimirFila(f1);
                    break;
                case 'c':
                    esvaziarFila(f1);
                    break;
                case 'i':
                    if (scanf("%f", &valor) == 1) { // Certifica que o valor foi lido corretamente
                        enfileirar(f1, valor);
                    }
                    break;
                case 'r':
                    desinfileirar(f1);
                    break;
                case 'f':
                    esvaziarFila(f1);
                    free(f1);
                    return 0;
            }
        }
    }
    system("pause");
}