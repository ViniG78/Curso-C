/*
    2 - Suponha que criamos uma estrutura para armazenar cadastros de alunos de um curso:
    Implemente duas funções, uma para inserir e uma para mostrar os vetores criados dinamicamente.

VINICIUS GABRIEL
DATA: 31/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCT DE CADASTRO
typedef struct{
    char nm[40];
    int id;
    char sx[10];
}cad;
//FUNÇÂO PARA RECEBER DADOS
void funcaoa(cad *vet,int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        printf("\nNome: ");
        fflush(stdin);
        gets(vet[i].nm);
        printf("\nSexo: ");
        fflush(stdin);
        gets(vet[i].sx);
        printf("\nIdade: ");
        fflush(stdin);
        scanf("%d",&vet[i].id);
        system("cls");
    }
    funcaob(vet,n);
}
//FUNÇÂO PARA MOSTRAR DADOS
void funcaob(cad *vet,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n======================");
        printf("\nNome: %s",vet[i].nm);
        printf("\nSexo: %s",vet[i].sx);
        printf("\nIdade: %d",vet[i].id);
    }
    free(vet);//LIBERANDO MEMORIA DO VETOR CRIADO DINAMICAMENTE
}
int main()
{
    //DEFININDO TAMANHO DO VETOR
    int n;
    printf("\nDefina a quantidade de pessoas a serem cadastradas: ")/
    fflush(stdin);
    scanf("%d",&n);
    system("cls");
    //CRIANDO VETOR DINAMICAMENTE
    cad *vet = (cad*)calloc(n,sizeof(cad));
    //ENVIANDO VETOE PARA RECEBER OS DADOS
    funcaoa(vet,n);
    printf("\n");
    return 0;
}
