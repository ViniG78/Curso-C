#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define m 1
int main()
{
    int *vet = (int*) malloc(m * sizeof(int));
    int opc=0,i;
    fila *f = (fila*) malloc(sizeof(fila));
    criafila(f);
    pilha *p1 = (pilha*) malloc(sizeof(pilha));
    criapilha(p1);
    pilha *p2 = (pilha*) malloc(sizeof(pilha));
    criapilha(p2);
    while(opc!=4)
    {
        printf("\n ----MENU DE OPÇÔES----");
        printf("\n1- EMPILHA EM P1");
        printf("\n2- EMPILHA EM P2");
        printf("\n3- ENFILERA");
        printf("\n4- SAIR");
        switch(opc){

        }
    }
    printf("\n");
    return 0;
}
