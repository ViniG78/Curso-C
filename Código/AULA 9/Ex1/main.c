#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include <locale.h>
#include <conio.h>
#include<time.h>
int main()
{
    srand(time(NULL));////FUNÇÂO PARA NÂO REPEtIR A PILHA
    int opc=0,item;
    //CRIANDO PILHA
    pilha *p = (pilha*) malloc(sizeof(pilha));
    creatpilha(p);
    //CRIANDO FILA
    fila *f = (fila*) malloc(sizeof(fila));
    creatfila(f);
    setlocale(LC_ALL, "Portuguese");//FUNÇÂO PARA ACEITAR OS CARACTERES DO PORTUGUES
    //CHAMANDO MENU
    while(opc != 3)
    {

        system("cls");
        mostra(f, p);//MOSTRANDO ITENS DA FILA E DA PILHA
        printf("\n ----MENU DE OPÇÔES----");
        printf("\n1 - EMPILHA");
        printf("\n2 - ENFILERA");
        printf("\n3 - SAIR\n");
        scanf("%d",&opc);

        switch (opc){
           //EMPILHANDO VALOR
            case 1:{
               // printf("\nDIGITE O VALOR A SER EMPILHADO: ");
               // scanf("%d",&item);
                item =  rand() % 1000; //DEFININDO UM NUMERO ALEATORIO PARA PILhA
                empilha(p,item);
                break;
            }
             //ENFILEIRANDO VALOR
            case 2:{
                //printf("\nO VALOR ESTÀ SENDO EMFILHERADO");
                item = desempilha(p);//REMOVENDO VALOR DA PILHA
                enfilera(f,item);//INSERINDO NA FILA
                printf("\n");
                //system("pause");
                break;
            }
            //ENCERRANDO PROHRAMA
            case 3:{
                printf("\nENCERRANDO");
                opc = 3;
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
