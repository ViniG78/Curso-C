/*
1- Escreva uma fun��o que receba um vetor inteiro v[max], o tamanho
    do vetor e os endere�os de duas vari�veis inteiras, digamos min e
    max, e deposite nessas vari�veis o valor de um elemento m�nimo e
    o valor de um elemento m�ximo do vetor. Escreva tamb�m uma fun��o
    main que use a fun��o.

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
