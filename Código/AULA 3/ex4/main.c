/*
4- Implemente uma fun��o com as seguintes caracter�sticas:

a) Recebe dois n�meros inteiros do usu�rio;
b) Retorna 1 se os n�meros s�o iguais, 0 se s�o diferentes
e -1 se a soma ou produto estoura a faixa dos inteiros. Al�m
disso retorna a soma e o produto dos dois n�meros;
AUTOR: VINICIUS GABRIEL
DATA: 17/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
//FUN��O PARA RECEBER VALORES
void fun_rec(int *ra, int *rb)
{
    int a,b;//VARIAVEIS PARA ARMAZENAR OS 2 VALORES.
    printf("\n Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i",&a);
    printf("\n Digite o segundo valor valor: ");
    fflush(stdin);
    scanf("%i",&b);
    //VERIFICANDO SE S�O DIFRENTES OU IGUAIS
    if(a == b)
        *ra =1;
    else
        *ra =0;
    //VERIFICANDO SE ESTOURA OS INTEIROS
    if(a*b>2147483647 || a*b< -2147483647)
        *rb=-1;
    else
        *rb=0;
}

int main()
{
    int ra,rb;
    fun_rec(&ra,&rb);
    printf("\n RESULTADO ");
    printf("\n %d ",ra);
    printf("\n %d ",rb);

    printf("\n");

    return 0;
}
