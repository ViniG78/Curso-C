/*
5- Faça um programa que aceite uma série de valores
    do usuário e os armazene em um vetor.

    A seguir o programa chama a função menor( ), passando
    como argumento o ponteiro e o tamanho do vetor. A função localiza
    o menor valor armazenado no vetor e o retorna ao programa original.

AUTOR
DATA: 17/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
void ach_mn(int *r, int *mn)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(r[i]<*mn)
           *mn = r[i];
    }

}
int main()
{
    int r[10],i,mn;
    //RECEBENDO VALORES
    for(i=0;i<10;i++)
    {
        printf("\n Digite um valor: ");
        fflush(stdin);
        scanf("%d",&r[i]);
        mn = r[0];
    }
    ach_mn(r,&mn);
    printf("\n o menor numero sera: %d",mn);


    printf("\n");
    return 0;
}
