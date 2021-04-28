/*
1) Desenvolva um programa para vendas de passagens de ônibus.
Defina uma STRUCT, crie o menu de opções e todas as funções
necessárias para manipular esta STRUCT;

a) Cadastrar pessoa;
b) Vender passagem;
c) Imprimir comprovante;

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCT PARA CADASTRO DE PESSOA
typedef struct pessoa{
    char nm[40];
    char sx[15];
    int cpf;
    int id;
}pessoa;
typedef struct venda{
    char saida[40];
    char dest[40];
    float valor;
}venda;

int main()
{
    //MENU DE OPÇÔES
    int s=0,cont=0;
    pessoa p;
    venda v;
    //LAÇO PARA CADASTRAE PESSOAS E VENDAS
    while(s != 4 )
    {

        system("cls");
        printf("\n Digite a opção desejada.\n1-CADASTRAR PESSOAS.\n2-VENDER PASSAGEM.\n3-IMPRIMIR COMPROVANTE.\n4-SAIR.\n");
        fflush(stdin);
        scanf("%i",&s);
        if(s == 1)
        {
            cont=0;
            system("cls");
            printf("\n BEM VINDO AO CADASTRO DE PESSOAS");
            printf("\nNOME: ");
            fflush(stdin);
            gets(&p.nm);
            printf("\nSEXO: ");
            fflush(stdin);
            gets(&p.sx);
            printf("\nCPF(sem-caracteres): ");
            fflush(stdin);
            scanf("%i",&p.cpf);
            printf("\nIDADE: ");
            fflush(stdin);
            scanf("%i",&p.id);
            cont++;
        }
        else{
            if(s == 2)
            {
                if(cont == 0)
                {
                    system("cls");
                    printf("\nDADOS DO CLIENTE NAO INSERIDOS. VOLTAR PARA OPCAO 1\n");
                    system("pause");
                }
                else{
                    system("cls");
                    printf("\nDIGITE O PONTO DE SAIDA: ");
                    fflush(stdin);
                    gets(&v.saida);
                    printf("\nDIGITE O DESTINO: ");
                    fflush(stdin);
                    gets(&v.dest);
                    printf("\nDIGITE O VALOR: ");
                    fflush(stdin);
                    scanf("%f",&v.valor);
                    cont++;
                }
            }
            else{
                if(s == 3)
                {
                    if(cont != 2)
                    {
                        system("cls");
                        printf("\n POR FAVOR INSERIR DADOS\n");
                        system("pause");
                    }
                    else{
                        system("cls");
                        printf("\n %s com destino em %s e saida em %s",p.nm,v.dest,v.saida);
                        printf("\n Pagara o valor total de R$ %f. \n",v.valor);
                        system("pause");
                        cont = 0;
                    }
                }
            }
        }

    }
    system("cls");
    printf("\nOBRIGADO E TENHA UM BOM DIA");
    printf("\n\n\n");
    return 0;
}
