/*
2 - Faça uma função chamada media que recebe um vetor de inteiros,
    um inteiro n que indica o tamanho do vetor, e um inteiro i passado por referência.
    A função deve retornar a média dos n elementos no vetor e no inteiro i, passado por
    referência, deve retornar a posição do elemento que tem o valor mais próximo da média.
    Cabeçalho: float media(int *vet, int n, int *i);.

VINICIUS GABRIEL
DATA: 21/03/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//FUNÇÂO PRA CALCULAR A MEDIA
void media(int *vet, int n, int *i)
{
    //VARIAVEIS AUXILIARES
    int j,aux=0;
    float med=0,dif[n];
    //CALCULANDO MEDIA
    for(j=0;j<n;j++)
        aux=aux+vet[j];
    med = aux/n;
    //IMPRIMINDO RESULTADO DA MEDIA
    printf("\n A media dos elementos a cima sera de %.2f. ",med);
    //VERIFICANDO A POSIÇÂO DO NUMERO MAIS PROXIMO DA MEDIA
   for(j=0;j<n;j++)
   {
       dif[j]=med-vet[j];
       if(dif[j]<0)//DEIXANDO TODOS OS NUMEROS POSITIVOS PARA O VETOR DIF[n]
           dif[j]=dif[j]*-1;
   }
   aux=dif[0];//INICIANDO O VETOR AUX
   for(j=0;j<n;j++)
   {
       if(dif[j]<aux)//PROCURANDO A POSIÇÂO COM A MENOR DIFERENÇA
       {
           aux = dif[j];
           *i=j;//VARIAVEL I RECEBEBNDO A POSIÇÂO COM A MENOR DIFERENÇA
       }
   }
}
int main()
{
    //CRIANDO VARIAVEIS
    int n,i;
    //RECEBENDO TAMANHO DO VETOR
    printf("\n Informe o tamanho do vetor: ");
    fflush(stdin);
    scanf("%d",&n);
    int vet[n];
    //PREENCHENDO VETOR
    for(i=0;i<n;i++)
    {
        vet[i] = rand() % 10000;
        if(i != n-1)
            printf("%d, ", vet[i]);
        else
             printf("%d.", vet[i]);
    }
    //FUNÇÂO PARA CALCULAR A MEDIA E O NUMERO MAIS PROXIMO DA MEDIA
    media(vet,n,&i);
    //IMPRINDO POSIÇÂO MAIS PROXIMA DA MEDIA
    printf("\n A posição do valor mais proximo da media é %d ",i);

    printf("\n");
    return 0;
}
