/*
2- Fa�a um programa que:
a) declare duas vari�veis a e b do tipo float;
B) declare um ponteiro �p� para o tipo float que aponte para b;
c) Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em a;
d) Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em b;
e) Imprima o conte�do de a;
f) Imprima o endere�o de a;
g) Imprima o conte�do de p;
h) Imprima o endere�o de p;
i) Imprima o conte�do do endere�o apontado por p;
j) Imprima o conte�do de b;
k) Imprima o endere�o de b;

AUTOR: VINICIUS GABRIEL
DATA: 17/03/2020
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    float *p;
    p = &b;
    printf("\nDigite um valor real[a]: ");
    fflush(stdin);
    scanf("%f",&a);
    printf("\nDigite um valor real[b]: ");
    fflush(stdin);
    scanf("%f",&b);
    system("cls");
    *p=b;
    printf("\nO conteudo de 'a' sera: %f ",a);
    printf("\nO conteudo de '&a' sera: %d ",&a);
    printf("\nO conteudo de 'p' sera: %d ",p);
    printf("\nO conteudo de '&p' sera: %d ",&p);
    printf("\nO conteudo de '*p' sera: %f ",*p);
    printf("\nO conteudo de 'b' sera: %f ",b);
    printf("\nO conteudo de '&b' sera: %d ",&b);

    return 0;
}
