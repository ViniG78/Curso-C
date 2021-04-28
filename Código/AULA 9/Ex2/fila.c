#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
//INICIALIZANDO PILHA COM NULL
void creatpilha(pilha *p)
{
    p->topo=NULL;
}
//INICIALIZANDO FILA COM NULL
void creatfila(fila *f)
{
    f->ini = NULL;
    f->fim = NULL;
}
//VERIFICANDO SE A PILHA ESTÀ VAZIA
int pilha_vazia(pilha *p)
{
    if(p->topo == NULL)
        return 1;
    else
        return 0;
}



//VERIFICANDO SE A FILA ESTÀ VAZIA
int fila_vazia(fila *f)
{
    if(f->ini == NULL)
        return 1;
    else
        return 0;
}
//EMPILHANDO VAOR DA FILA
void empilha (pilha *p,int e)
{
    Tpilha *novo = (Tpilha*) malloc(sizeof(Tpilha));
    novo->ant = p->topo;
    novo->item = e;
    p->topo =novo;

}
//ENFILEIRANDO VALOR ALEATORIO
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
//DESENFILEIRANDO PARA JOGAR NA PILHA
int desenfilera(fila *f)
{
    int valor;
    Tfila *aux = (Tfila*) malloc(sizeof(Tfila));
    aux = f->ini;
    valor = aux->dado;
    f->ini= aux->prox;
    aux->prox=NULL;
    if(f->ini==NULL)
    {
        f->fim = NULL;
        free(aux);
    }
    else
        free(aux);

    return valor;

}
//MOSTRANDO A FILA E A PILHA
void mostra(fila *f, pilha *p)
{
   //FILA
       printf("\n");
       Tfila *aux = (Tfila*)malloc(sizeof(Tfila));
       aux = f->ini;
       while(aux != NULL)
       {
          printf("| %d ",aux->dado);
          aux=aux->prox;
       }

    //PILHA
        printf("\n\n");
        Tpilha *auxp=(Tpilha*)malloc(sizeof(Tpilha));
        auxp=p->topo;
        while(auxp!=NULL){
            printf("%d \n",auxp->item);
            auxp=auxp->ant;
        }

}
