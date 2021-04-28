/*
6) Faça um programa usando ponteiros, para ordenar 3 números e mostrá-los ordenados na tela.


AUTOR:VINICIUS GABRIEL
DATA: 18/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
void ordem(int *a,int *b, int *c)
{
    int aux;
    if(*a>*c)
    {
        aux=*a;
        *a = *c;
        *c = aux;
    }
    if(*a>*b)
    {
       aux = *a;
       *a = *b;
       *b = aux;
    }
    if(*b>*c)
    {
        aux = *b;
        *b = *c;
        *c =aux;
    }


}
int main()
{
    int a,b,c;
    printf("\n Digite o 1° numero: ");
    fflush(stdin);
    scanf("%d",&a);
    printf("\n Digite o 2° numero: ");
    fflush(stdin);
    scanf("%d",&b);
    printf("\n Digite o 3° numero: ");
    fflush(stdin);
    scanf("%d",&c);
    ordem(&a,&b,&c);
    printf("\n %d %d %d",a,b,c);
    printf("\n");
    return 0;
}
