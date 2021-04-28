/*
2- Crie um programa para manipular vetores. O seu programa deve implementar uma função
   chamada inverte_vetor, que recebe como parâmetro dois vetores V1 e V2, ambos de
   tamanho N. A função deve copiar os elementos de V1 para V2 na ordem inversa.
   Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos
   para V2 na seguinte ordem: V2 = {5,4,3,2,1}.

   Além disso, a função também deve retornar o maior valor encontrado em V1.

   A função deve obedecer ao seguinte protótipo:

	 int inverte_vetor(int *v1, int *v2, int n);

2.1- Em seguida, implemente no mesmo modulo outra função chamada multiplica_escalar, que recebe
     como parâmetro dois vetores V1 e V2 (ambos de tamanho N), e um número inteiro X. A função
     deve multiplicar cada um dos elementos de V1 por X e armazenar os resultados em V2.

     A função deve obedecer ao seguinte protótipo:

       void multiplica_escalar(int *v1, int *v2, int x, int n);

2.2- Em seguida crie a função principal do programa utilizando as funções inverte_vetor e multiplica_escalar
     para inverter um vetor de tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar
     também fornecido pelo usuário.

     Por ultimo, o programa deverá exibir o vetor resultante.



AUTOR: VINICIUS GABRIEL
DATA: 18/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
//FUNÇÂO PRA INVERTER VALORES
int inverte_vetor(int *va, int *vb, int n)
{
    int i,j;
    n=va[0];
    printf("\n passou1");
    j=9;
    for(i=0;i<10;i++)
    {
        printf("\n passou2");
        vb[i] =va[j];
        if(n<va[i])
        {
            n=va[i];
        }
        j--;
    }
    printf("\n passou3");

    return n;

}
//FUNÇÂO PRA ULTIPLICAR
 void multiplica_escalar(int *va, int *vc, int x)
 {
     int i;
     for(i=0;i<10;i++)
         vc[i] = va[i] * x;


 }
int main()
{
    //DECLARANDO VARIAVEIS
    int va[10],n,nn;
    int vb[10];
    int vc[10];
    int i,x,j;
    //RECEBENDO VALORES PARA O PRIMEIRO VETOR
    for(i=0;i<10;i++)
    {
        printf("\nForneça um numero usuario >: >: : ");
        fflush(stdin);
        scanf("%d",&va[i]);
    }
    //CHAANDO FUNÇÂO PRA INVERTER VALORES
    nn = inverte_vetor(va,vb,n);
    //PEDINDO NUMERO PARA MULTIPLICAR VA
    printf("\n Agora digite um numero para x: ");
    fflush(stdin);
    scanf("%d",&x);
    //CHAANDO FUNÇÂO PARA MULTIPLICAR VA
    multiplica_escalar(va,vc,x);
    //IMPRIMINDO RESULTADO NA TELA
    printf("\n RESULTADO ");
    printf("\n --------- ");

    printf("\n O maior numero do 1 vetor sera: %d",nn);

    printf("\n Vetor original\n");
    for (i=0;i<10;i++)
        printf("%d; ",va[i]);

    printf("\n Vetor invertido\n");
    for (i=0;i<10;i++)
        printf("%d; ",vb[i]);

    printf("\n Vetor multiplicado por %d\n",x);
    for (i=0;i<10;i++)
        printf("%d; ",vc[i]);




    printf("\n");
    return 0;
}
