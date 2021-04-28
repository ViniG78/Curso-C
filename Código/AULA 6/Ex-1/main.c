#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    //DECLARANDO VARIAVEIS
    int n;
    printf("\nDigite o tamanho do vetor: ");
    fflush(stdin);
    scanf("%d",&n);
    //CRIANDO VETORES
    int *veta = (int*)calloc(n,sizeof(int));
    int *vetb = (int*)calloc(n,sizeof(int));
    int i=0;
    //PREENCHENDO VETOR A POR MEIO DA FUNÇÂO RAND
    printf("\nVETOR ORIGINAL\n");
    for(i=0;i<n;i++)
    {
        veta[i]=  rand() % 100;
        printf("%d ",veta[i]);
    }
    //INVERTENDO VETOR A E COLOCANDO NO VETOR B
    int cont = n-1;
    printf("\nVETOR INVERTIDO\n");
    for(i=0;i<n;i++)
    {
        vetb[i]=veta[cont];
        cont--;
        printf("%d ",vetb[i]);
    }

    //LIBERANDO ESPAÇO DE MEMORIA
    free(veta);
    free(vetb);


    printf("\n");
    return 0;
}
