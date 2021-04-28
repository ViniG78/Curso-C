/*
1- Escreva uma função que receba um vetor inteiro v[max], o tamanho
    do vetor e os endereços de duas variáveis inteiras, digamos min e
    max, e deposite nessas variáveis o valor de um elemento mínimo e
    o valor de um elemento máximo do vetor. Escreva também uma função
    main que use a função.

AUTOR: VINICIUS GABRIEL
DATA: 18/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
void f_vet(int *vet,int *mn,int *mr)
{
    int  i=0;
    for(i=0;i<10;i++)
    {
        printf("\n Digite um valor: ");
        fflush(stdin);
        scanf("%i",&vet[i]);
        if(*mn == 0)
          *mn = vet[i];
        else
        {
              if(vet[i]<*mn)
              *mn = vet[i];
        }

        if(*mr == 0)
            *mr = vet[i];
        else
        {
            if(vet[i]>*mr)
              *mr = vet[i];
        }
    }
     return;
}

int main()
{
    int vet[10],mn=0,mr=0;
    f_vet(vet,&mn,&mr);
    printf("\n O maior numero sera: %i",mr);
    printf("\n O menor numero sera: %i",mn);
    printf("\n\n");
    return 0;
}
