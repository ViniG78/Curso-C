/*
1 - Fa�a uma fun��o chamada primo que recebe como par�metro
    um inteiro m e dois outros inteiros p1 e p2 passados por refer�ncia.
    A fun��o deve retornar em p1 o maior n�mero primo que � menor do que m e
    deve retornar em p2 o menor n�mero primo que � maior do que m.

VINICIUS GABRIEL
20/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
//FUN��O PARA ACHAR O MAIOR E O MENOR PRIMO
void primo(int m,int *pa,int *pb)
{
    int i,a,r,cont;
    //LA�O PARA PERCORRER O NUMEROS ATE M EM BUSCA DO MAIOR PRIMO
    for(i=m-1;i>=1;i--)
    {
        cont=0;
        for(a=1;a<=i;a++)//IDENTIFICANDO O NUMERO PRIMMO
        {
            r=i%a;
            if(r == 0)
                cont++;
        }
        if(cont == 2) // CASO O CONT SEJA MAIOR QUE 2 O NUMERO N�O � PRIMO
        {
            *pa = i;
            i=0;
        }
    }

    for(i=m+1;i<m*m;i++)//ENCONTRANDO MENOR NUMERO PRIMO DEPOIS DE M
    {
        cont=0;
        for(a=1;a<=i;a++)//IDENTIFICANDO O NUMERO PRIMMO
        {
            r=i%a;
            if(r == 0)
                cont++;
        }
        if(cont == 2)// CASO O CONT SEJA MAIOR QUE 2 O NUMERO N�O � PRIMO
        {
            *pb = i;
            i=m*m;
        }
    }
}
int main()
{
    //DECLARANDO VARIAVEIS
    int m,pa,pb;
    printf("\n Digite um valor: ");
    fflush(stdin);
    scanf("%d",&m);

    primo(m,&pa,&pb);
    //IMPRIMINDO RESULTADO
    printf("\n O maior numero primo antes de %d sera: %d",m,pa);
    printf("\n O menor numero primo depois de %d sera: %d",m,pb);
    printf("\n");
    return 0;
}
