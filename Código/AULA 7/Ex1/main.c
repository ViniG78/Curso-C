/*
Desenvolva uma rotina para inverter a posição dos elementos de uma pilha P.

VINICIUS GABRIE
08/04/2021
*/
#include <stdio.h>
#include <stdlib.h>
//ARMAZENAR O ITEM INSERIDO E GUARDAR OENDEREÇO ANTERIOR
typedef struct Tpilha{
    int item;
   struct Tpilha *ant;
}Tpilha;
//GUARDAR O ENDEREÇO DO ULTIMO VALOR INSERIDO
typedef struct pilha{
    Tpilha *t;
}pilha;
//INICIANDO PPILHA
void creatpiha(pilha *p){
    p->t=NULL;
}
//EMPILHANDO VALORES
void empilha(pilha *p,int v)
{
    Tpilha *novo = (Tpilha*) malloc(sizeof(Tpilha));//VARIAVEL DE CADA ITEM DA PILHA
    novo->ant=p->t;//LIGANDO OVALOR DE CIMA DA PILHA COM O DE BaIXO
    novo->item = v;//ARMAZENANDO VALOR
    p->t=novo;//AVANÇANDO O TOPO PARA PROXIMA STRUCT
}
//DESEMPILHANDO VALORES
int desempilha(pilha *p)
{
    int e;//VALOR QUE A FUNÇÂO IRA RETORNAR
    Tpilha *aux=(Tpilha*) malloc(sizeof(Tpilha));
    aux = p->t;
    p->t = aux->ant;//VOLTANDO O TOPO PARA O VALOR DE BAIXO
    aux->ant=NULL;//EXCLUINDO STRUCT DE CIMA
    e=aux->item;//RECEBENDO VALOR DO ELEMENDO EXCLUIDO
    free(aux);//LIBERANDO A VARIAVEL AUXILIAR
    return e;
}
//MOSTRANDO ITENS DA PILHA
void mostrar_pilha(pilha *p){


   Tpilha *aux=(Tpilha*)malloc(sizeof(Tpilha));
   aux=p->t;

    while(aux!=NULL){
       printf("%d \n",aux->item);
       aux=aux->ant;
    }
 }

int main()
{
    //CRIANDO VARIAVEIS
    int opc,v=0;
    pilha *p=(pilha*)malloc(sizeof(pilha));
    pilha *p1=(pilha*)malloc(sizeof(pilha));
    //INICIANDO PILHAS
    creatpiha(p);
    creatpiha(p1);
    //MENU
    while(opc!=0)
    {
        system("cls");
        printf("\n----PILHA ORIGINAL-----\n");
        mostrar_pilha(p);
        printf("\n -----ESCOLHA UMA OPÇÂO-----");
        printf("\n 1-EMPILHAR");
        printf("\n 2-INVERTER PILHA");
        printf("\n 0-FINALIZAR\n");
        fflush(stdin);
        scanf("%d",&opc);
        switch(opc){
         //RECEBENDO VALORES PARA PILHA
        case 1:{
           printf("\nDigite um valor:");
           fflush(stdin);
           scanf("%d",&v);
           empilha(p,v);
           break;
        }
        //INVERTENDO PILHA
        case 2:{
            system("cls");
            printf("\n----PILHA INVERTIDA----\n");
            //DESEMPILHANDO P E EMPILHANDO EM P1
            while(p->t!=NULL){
                v=desempilha(p);
                empilha(p1,v);
            }
           mostrar_pilha(p1);
           system("pause");
           break;

        }
        case 0:{
            opc=0;
            printf("\nPROFRAMA FINALIZADO!");
            break;
        }

        }

    }
    printf("\n");
    return 0;
}
