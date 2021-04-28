/*
    3 - Construa um programa (main) que aloque em tempo de execução (dinamicamente) um vetor V1 de 3 posições
    (#define 3) usando a chamada da função malloc.

    Agora, aproveite este programa para construir uma função (recebe_vetor) que recebendo os parâmetros do vetor;
    aloque um outro vetor V2 de 3 posições dinamicamente na função;
    multiplique as posições dos dois vetores;
    libere a memória interna da função.

    Finalmente, crie no programa (main) que teste/use a função criada acima.
VINICIUS GABRIEL
DATA 01/04/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#define n 3
//FUNÇÂO PARA MULTILICAR VETOR
void mult(int *veta)
{
    srand(time(NULL));//SEMENTE PARA A FUNÇÂO RANDE NÂO REPETIR NUMEROS A CADA EXECUÇÂO
    int i;
    int *vetb = (int *) malloc(n*sizeof(int));
    //DEFININDO VETOR QUE IRA MULTIPLICAR PELO QUE A FUNÇÂO RECEBE
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
    srand(time(NULL));//SEMENTE PARA A FUNÇÂO RANDE NÂO REPETIR NUMEROS A CADA EXECUÇÂO
    int i;
    int *vet = (int *) malloc(n*sizeof(int));
    //PREENCHENDO PRIMEIRO VETOR
    printf("\n----PRIMEIRO VETOR-----\n");
    for(i=0;i<n;i++)
    {
       vet[i] =  rand() % 100;
       printf("%d ",vet[i]);
    }
    //CHAMANDO FUNÇÂO PARA MULTIPLICAR O PRIMEIRO VETOR
    mult(vet);
    //LIBERANDO O PRIMEIRO VETOR
    free(vet);
    printf("\n");
    return 0;
}
