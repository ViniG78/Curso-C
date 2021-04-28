/*
  1)  Escreva uma função que recebe duas pilhas e
    um valor inteiro positivo. Para cada valor
    lido, verifica se o valor é par e adiciona
    a pilha p1 caso contrário adiciona a pilha p2.

VINICIUS GABRIEL
DATA 13/04/2021
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Tpilha{
    int valor;
    struct Tpilha *ant;
}Tpilha;
typedef struct pilha{
    Tpilha *topo;
}pilha;
void creatpilha(pilha *p)
{
    p->topo=NULL;
}
void empilha (pilha *p,int e)
{
    Tpilha *novo = (Tpilha*) malloc(sizeof(Tpilha));
    novo ->ant=p->topo;
    p->topo = novo;
    novo ->valor = e;
}
void mostrar (pilha *p)
{
    if(p->topo == NULL)
        printf("\nPILHA VAZIA");
    else{
        Tpilha *aux=(Tpilha*)malloc(sizeof(Tpilha));
        aux=p->topo;

        while(aux!=NULL){
            printf("%d \n",aux->valor);
                aux=aux->ant;
        }
      }
}
int main()
{
    pilha *p1 = (pilha*) malloc(sizeof(pilha));
    creatpilha(p1);
    pilha *p2 = (pilha*) malloc(sizeof(pilha));
    creatpilha(p2);
    int valor=0,i=0;
    while(i!=3)
    {
        system("cls");
        printf("\n ----ESCOLHA UMA OPÇÂO----");
        printf("\n1-EMPILHAR");
        printf("\n2-MOSTRAR");
        printf("\n3-SAIR\n");
        fflush(stdin);
        scanf("%d",&i);
        switch(i){
            case 1:{
                printf("\nDIGITE UM VALOR\n");
                fflush(stdin);
                scanf("%d",&valor);
                if(valor % 2 == 0)
                    empilha(p1,valor);
                else
                    empilha(p2,valor);
                break;
            }
            case 2:{
                printf("\nPILHA PAR\n");
                mostrar(p1);
                printf("\nPILHA IMPAR\n");
                mostrar(p2);
                system("pause");
                break;
            }
            case 3:{
                i=3;
                printf("\nPROGRAMA FINALIZADO");
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
