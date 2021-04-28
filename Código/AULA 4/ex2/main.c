/*
2- Crie um programa para manipular vetores. O seu programa deve implementar uma fun��o
   chamada inverte_vetor, que recebe como par�metro dois vetores V1 e V2, ambos de
   tamanho N. A fun��o deve copiar os elementos de V1 para V2 na ordem inversa.
   Ou seja, se a fun��o receber V1 = {1,2,3,4,5}, a fun��o deve copiar os elementos
   para V2 na seguinte ordem: V2 = {5,4,3,2,1}.

   Al�m disso, a fun��o tamb�m deve retornar o maior valor encontrado em V1.

   A fun��o deve obedecer ao seguinte prot�tipo:

	 int inverte_vetor(int *v1, int *v2, int n);

2.1- Em seguida, implemente no mesmo modulo outra fun��o chamada multiplica_escalar, que recebe
     como par�metro dois vetores V1 e V2 (ambos de tamanho N), e um n�mero inteiro X. A fun��o
     deve multiplicar cada um dos elementos de V1 por X e armazenar os resultados em V2.

     A fun��o deve obedecer ao seguinte prot�tipo:

       void multiplica_escalar(int *v1, int *v2, int x, int n);

2.2- Em seguida crie a fun��o principal do programa utilizando as fun��es inverte_vetor e multiplica_escalar
     para inverter um vetor de tamanho 10 fornecido pelo usu�rio e em seguida multiplicar esse vetor por um escalar
     tamb�m fornecido pelo usu�rio.

     Por ultimo, o programa dever� exibir o vetor resultante.



AUTOR: VINICIUS GABRIEL
DATA: 18/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
//FUN��O PRA INVERTER VALORES
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
//FUN��O PRA ULTIPLICAR
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
        printf("\nForne�a um numero usuario >: >: : ");
        fflush(stdin);
        scanf("%d",&va[i]);
    }
    //CHAANDO FUN��O PRA INVERTER VALORES
    nn = inverte_vetor(va,vb,n);
    //PEDINDO NUMERO PARA MULTIPLICAR VA
    printf("\n Agora digite um numero para x: ");
    fflush(stdin);
    scanf("%d",&x);
    //CHAANDO FUN��O PARA MULTIPLICAR VA
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
