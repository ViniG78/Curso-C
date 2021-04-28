#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
//DEFININDO PILHA
typedef struct Tpilha{
    int item;
    struct Tpilha *ant;
}Tpilha;
typedef struct pilha{
    Tpilha *topo;
}pilha;
//DEFININDO FILA
typedef struct Tfila{
    int dado;
    struct Tfila *prox;
}Tfila;
typedef struct fila{
    Tfila *ini;
    Tfila *fim;
}fila;
//FUNÇÔES PARA LIDAR COM A PILHA
void creatpilha(pilha *p);
int pilha_vazia(pilha *p);
void empilha (pilha *p,int e);
int desempilha (pilha *p);
//FUNÇÔES PARA LIDAR COM A FILA
int fila_vazia(fila *f);
void creatfila(fila *f);
void enfilera (fila *f, int e);
void mostra(fila *f, pilha *p);

#endif // FILA_H_INCLUDED
