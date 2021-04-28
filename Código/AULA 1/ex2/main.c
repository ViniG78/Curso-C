/*
2)Com base em structs, suponha que é necessário armazenar informações relacionadas à veículos, totalizando, no máximo, 10 veículos.

Para cada veículo, deverão ser fornecidos os seguintes dados:
marca do veículo;
Modelo;
ano de fabricação;
placa (formato XXX-YYYY; onde X denota as letras e Y denota os números da placa).
O sistema deverá oferecer, ao usuário, as seguintes funcionalidades:

Listar os veículos cadastrados;
Inserir um novo veículo;
Listar os veículos filtrando-se por ano de fabricação;
Listar os veículos com o ano de fabricação acima de um certo valor especificado pelo usuário.
Listar os veículos filtrando-se pelo modelo.

O sistema deverá armazenar os veículos ordenados pelo ano de fabricação, ou seja, ao inserir um novo veículo, este deve ser inserido
em ordem crescente de ano de fabricação.

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
        printf("\n======== DIGITE A OPÇÂO DESEJADA ========");
        printf("\n1-CADASTRAR VEÍCULOS.\n2-CADASTRAR A PARTIR DO ULTIMO\n3-SAIR. \n");
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
        printf("\n======== DIGITE A OPÇÂO DESEJADA ========");
        printf("\n1-LISTAR VEÍCULOS CADASTRADOS.");
        printf("\n2-INSERIR NOVO VEÍCULO.");
        printf("\n3-VEÍCULOS POR ANO DE FABRICAÇÂO");
        printf("\n4-VEÍCULOS A PARTIR DE UM DETERMINADO ANO DE FABRICAÇÂO.");
        printf("\n5-LISTAR VEÍCULOS POR MODELO.");
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
