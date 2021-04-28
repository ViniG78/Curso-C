/*
2- Faça um programa que:
a) declare duas variáveis a e b do tipo float;
B) declare um ponteiro “p” para o tipo float que aponte para b;
c) Peça que o usuário digite um número do tipo real, e o armazene em a;
d) Peça que o usuário digite um número do tipo real, e o armazene em b;
e) Imprima o conteúdo de a;
f) Imprima o endereço de a;
g) Imprima o conteúdo de p;
h) Imprima o endereço de p;
i) Imprima o conteúdo do endereço apontado por p;
j) Imprima o conteúdo de b;
k) Imprima o endereço de b;

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
