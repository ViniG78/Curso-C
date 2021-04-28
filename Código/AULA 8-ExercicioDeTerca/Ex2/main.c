/*
    2) Escreva uma função que recebe uma pilha p1 e os dados
    dos alunos (nome, rua, idade, sexo). Você deve inserir os
    dados na pilha seguindo os parâmetros da Struct. Lembre-se
    das aulas de ponteiros e como serão inseridos os dados dentro
    da pilha.

VINICIUS GABRIEL
DATA 15/04/2020

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct aluno{
    char nm[40];
    char rua[40];
    int idade;
    char sx[10];
}aluno;
typedef struct Tpilha{
    struct aluno item;
    struct Tpilha *ant;
}Tpilha;
typedef struct pilha{
    Tpilha *t;
}pilha;
void creatpilha (pilha *p){
    p->t = NULL;
}
void empilha (pilha *p,aluno e)
{
    Tpilha *novo =(Tpilha*)malloc(sizeof(Tpilha));
        strcpy(novo->item.nm, e.nm);
        strcpy(novo->item.rua, e.rua);
        novo->item.idade=e.idade;
        strcpy(novo->item.sx, e.sx);
        novo->ant=p->t;
        p->t=novo;
}
void mostra_pilha(pilha *p){
     Tpilha *aux = (Tpilha*)malloc(sizeof(Tpilha));
     aux=p->t;
     while(aux!=NULL){
        printf("\n--------------------\n");
        printf("\nNome: %s",aux->item.nm);
        printf("\nRua: %s",aux->item.rua);
        printf("\nIdade: %d",aux->item.idade);
        printf("\nSexo: %s\n",aux->item.sx);
        aux=aux->ant;
     }

}
int main()
{
    int i=5;
    char a[100];
    pilha *p = (pilha*)malloc(sizeof(pilha));
    aluno e;
    creatpilha(p);
    while(i!=0)
    {
        system("cls");
        printf("\nDigite a opção desejada");
        printf("\n1-Empilhar");
        printf("\n2-Mostrar pilha");
        printf("\n3-Sair\n");
        scanf("%d", &i);
        switch(i){
            case 1:{
                printf("\nDigite o nome: ");
                fflush(stdin);
                gets(e.nm);
                printf("\nDigite a rua: ");
                fflush(stdin);
                gets(e.rua);
                printf("\nDigite o sexo(F ou M): ");
                fflush(stdin);
                gets(e.sx);
                printf("\nDigite a idade: ");
                fflush(stdin);
                scanf("%d",&e.idade);
                empilha(p,e);
                break;
            }
            case 2:{
                mostra_pilha(p);
                system("pause");
                break;
            }
            case 3:{
                i =0;
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
