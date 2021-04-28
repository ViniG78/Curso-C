/*
2)Com base em structs, suponha que � necess�rio armazenar informa��es relacionadas � ve�culos, totalizando, no m�ximo, 10 ve�culos.

Para cada ve�culo, dever�o ser fornecidos os seguintes dados:
marca do ve�culo;
Modelo;
ano de fabrica��o;
placa (formato XXX-YYYY; onde X denota as letras e Y denota os n�meros da placa).
O sistema dever� oferecer, ao usu�rio, as seguintes funcionalidades:

Listar os ve�culos cadastrados;
Inserir um novo ve�culo;
Listar os ve�culos filtrando-se por ano de fabrica��o;
Listar os ve�culos com o ano de fabrica��o acima de um certo valor especificado pelo usu�rio.
Listar os ve�culos filtrando-se pelo modelo.

O sistema dever� armazenar os ve�culos ordenados pelo ano de fabrica��o, ou seja, ao inserir um novo ve�culo, este deve ser inserido
em ordem crescente de ano de fabrica��o.

DATA 11/03/2021
AUTOR: VINICIUS GABRIEL RIBEIRO BARBOSA
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct veic {
    char marca[15];
    char mod[15];
    int ano;
    char pc[7];
}veic;
void cad_v(veic *x,int *ca)
{
    setlocale (LC_ALL,"");
    int i=0;
    int c=0;
    int cont=0;
    int cont2=0;
    for(i=0;i<10;i++)
    {
        printf("\n======== DIGITE A OP��O DESEJADA ========");
        printf("\n1-CADASTRAR VE�CULOS.\n2-CADASTRAR A PARTIR DO ULTIMO\n3-SAIR. \n");
        fflush(stdin);
        scanf("%i",&c);
        if(c == 1)
        {

            printf("\nMARCA: ");
            fflush(stdin);
            gets(&x[i].marca);
            printf("\nMODELO: ");
            fflush(stdin);
            gets(&x[i].mod);
            printf("\nANO: ");
            fflush(stdin);
            scanf("%i",&x[i].ano);
            printf("\nPLACA: ");
            fflush(stdin);
            gets(&x[i].pc);
            cont++;

        }
        else{
            if(c == 2)
            {
                cont2=cont;
                i=cont;
                printf("\nMARCA: ");
                fflush(stdin);
                gets(&x[i].marca);
                printf("\nMODELO: ");
                fflush(stdin);
                gets(&x[i].mod);
                printf("\nANO: ");
                fflush(stdin);
                scanf("%i",&x[i].ano);
                printf("\nPLACA: ");
                fflush(stdin);
                gets(&x[i].pc);
                cont2++;
            }
            else{
                if(c == 3)
                {
                    i=10;
                }
            }
        }
        if(cont2>0)
            cont=cont2;
    }
    *ca = cont;
    return;
}
int main()
{
    setlocale (LC_ALL,"");
    veic x[10];
    int ca=0;
    int i=0;
    int c=0;
    int aux=0;
    int a;
    veic auxb;
    cad_v(x,&ca);
    while(c!=6)
    {
        c=0;
        printf("\n======== DIGITE A OP��O DESEJADA ========");
        printf("\n1-LISTAR VE�CULOS CADASTRADOS.");
        printf("\n2-INSERIR NOVO VE�CULO.");
        printf("\n3-VE�CULOS POR ANO DE FABRICA��O");
        printf("\n4-VE�CULOS A PARTIR DE UM DETERMINADO ANO DE FABRICA��O.");
        printf("\n5-LISTAR VE�CULOS POR MODELO.");
        printf("\n6-SAIR.\n");
        fflush(stdin);
        scanf("%i",&c);
        if(c == 1)
        {
              for(i=0;i<10;i++)
            {
                if(i<ca)
                {
                    printf("\n\nMARCA: %s \nMODELO: %s \nANO: %i \nPLACA: %s",x[i].marca,x[i].mod,x[i].ano,x[i].pc);
                    printf("\n========================================================================");
                }
                else
                    i=10;
            }
        }
        else{
            if(c == 2){
              cad_v(x,&ca);
            }
            else{
                if(c == 3){
                    for(i=0;i<10;i++){
                        if(aux == 0)
                            aux = x[i].ano;
                        if(aux>x[i].ano)
                        {
                            auxb = x[i-1];
                            x[i-1] = x[i];
                            x[i].ano =aux;
                            x[i] = auxb;
                        }
                    }
                     for(i=0;i<10;i++)
                    {
                        if(i<ca)
                        {
                            printf("\n\nMARCA: %s \nMODELO: %s \nANO: %i \nPLACA: %s",x[i].marca,x[i].mod,x[i].ano,x[i].pc);
                            printf("\n========================================================================");
                        }
                        else
                            i=10;
                    }
                }
                else{
                    if(c==4)
                    {
                        printf("\n Digite o ano a ser consultado");
                        fflush(stdin);
                        scanf("%i", &a);
                        for(i=0;i<10;i++)
                        {
                            if(i<ca)
                            {
                                if(x[i].ano>=a)
                                {
                                    printf("\n\nMARCA: %s \nMODELO: %s \nANO: %i \nPLACA: %s",x[i].marca,x[i].mod,x[i].ano,x[i].pc);
                                    printf("\n========================================================================");
                                }

                            }
                            else
                                i=10;
                        }

                    }
                    else{
                        if(c==5){

                        }
                    }
                }
            }
        }
    }

    printf("\n\n\n");
    return 0;
}
