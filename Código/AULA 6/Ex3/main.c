/*
    3 - Construa um programa (main) que aloque em tempo de execu��o (dinamicamente) um vetor V1 de 3 posi��es
    (#define 3) usando a chamada da fun��o malloc.

    Agora, aproveite este programa para construir uma fun��o (recebe_vetor) que recebendo os par�metros do vetor;
    aloque um outro vetor V2 de 3 posi��es dinamicamente na fun��o;
    multiplique as posi��es dos dois vetores;
    libere a mem�ria interna da fun��o.

    Finalmente, crie no programa (main) que teste/use a fun��o criada acima.
VINICIUS GABRIEL
DATA 01/04/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#define n 3
//FUN��O PARA MULTILICAR VETOR
void mult(int *veta)
{
    srand(time(NULL));//SEMENTE PARA A FUN��O RANDE N�O REPETIR NUMEROS A CADA EXECU��O
    int i;
    int *vetb = (int *) malloc(n*sizeof(int));
    //DEFININDO VETOR QUE IRA MULTIPLICAR PELO QUE A FUN��O RECEBE
    printf("\n----SEGUNDO VETOR----\n");
    for(i=0;i<n;i++)
    {
       vetb[i] =  rand() % 100;
       printf("%d ",vetb[i]);
    }
    //MULTIPLICANDO OS DOIS VETORES
    printf("\n----MULTIPLICANDO-OS----\n");
    for(i=0;i<n;i++)
    {
       vetb[i] =  veta[i]*vetb[i];
       printf("%d ",vetb[i]);
    }
    //LIBERANDO VETOR B
    free(vetb);
}
int main()
{
    srand(time(NULL));//SEMENTE PARA A FUN��O RANDE N�O REPETIR NUMEROS A CADA EXECU��O
    int i;
    int *vet = (int *) malloc(n*sizeof(int));
    //PREENCHENDO PRIMEIRO VETOR
    printf("\n----PRIMEIRO VETOR-----\n");
    for(i=0;i<n;i++)
    {
       vet[i] =  rand() % 100;
       printf("%d ",vet[i]);
    }
    //CHAMANDO FUN��O PARA MULTIPLICAR O PRIMEIRO VETOR
    mult(vet);
    //LIBERANDO O PRIMEIRO VETOR
    free(vet);
    printf("\n");
    return 0;
}
