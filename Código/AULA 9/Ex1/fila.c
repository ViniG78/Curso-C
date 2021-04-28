#include <stdio.h>
#include <stdlib.h> .
#include "fila.h"
void creatpilha(pilha *p)
{
    p->topo=NULL;
}
void creatfila(fila *f)
{
    f->ini=NULL;
    f->fim=NULL;
}
int pilha_vazia(pilha *p)
{
    if(p->topo == NULL)
        return 1;
    else
        return 0;
}
int fila_vazia(fila *f)
{
    if(f->ini == NULL)
        return 1;
    else
        return 0;
}
void empilha (pilha *p,int e)
{
    Tpilha *novo = (Tpilha*) malloc(sizeof(Tpilha));
    novo->ant = p->topo;
    novo->item = e;
    p->topo =novo;

}
int desempilha (pilha *p)
{
     int e;
     Tpilha *aux=(Tpilha*)malloc(sizeof(Tpilha));
     aux = p->topo;
     p->topo = aux->ant;
     aux->ant =NULL;
     e = aux->item;
     free(aux);
    return e;
}
void enfilera (fila *f, int e)
{
    Tfila *novo = (Tfila*) malloc(sizeof(Tfila));
    novo->dado = e;
    novo->prox = NULL;
    if(fila_vazia(f) == 1)
    {
        f->ini = novo;
        f->fim= novo;
    }
    else{
        f->fim->prox = novo;
        f->fim= novo;

    }
}
void mostra(fila *f, pilha *p)
{
    if( pilha_vazia(p) == 1)
    {
        printf("\n A PILHA ESTÀ VAZIA");
    }
    else
    {
        Tpilha *auxp=(Tpilha*)malloc(sizeof(Tpilha));
        auxp=p->topo;
        while(auxp!=NULL){
            printf("%d \n",auxp->item);
            auxp=auxp->ant;
        }
    }
    printf("\n");
    Tfila *aux = (Tfila*)malloc(sizeof(Tfila));
    aux = f->ini;
    while(aux != NULL)
    {
        printf("| %d ",aux->dado);
        aux=aux->prox;
    }

}
