/*
1 - Seja x um inteiro e p um ponteiro de inteiro. Escreva o trecho de código que determina
    para x o valor 10, utilizando o ponteiro p1.

AUTOR: VINICIUS GABRIEL
DATA 17/03/2021
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *p;
    p = &x;
    *p=10;
    printf("O valor de x eh %i ",x);
    return 0;
}
