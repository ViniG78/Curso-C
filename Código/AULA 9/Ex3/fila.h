#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
typedef struct Ffila{
    int dado;
    struct Ffila *prox;
}Ffila;
typedef struct fila{
    Ffila *ini;
    Ffila *fim;
}fila;
typedef struct Tpilha{
    int item;
    struct Tpilha *ant;
}Tpilha;
typedef struct pilha{
    Tpilha *t;
}pilha;
//PILHA
void criapilha(pilha *p);
int pilha_vazia(pilha *p);
void empilha(pilha *p, int e);
int desempilha(pilha *p);
//FILA
void criafila(fila *f);
int fila_vazia(fila *f);
void enfilera (fila *f, int e);

#endif // FILA_H_INCLUDED
