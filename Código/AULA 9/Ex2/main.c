#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
#include "fila.h"
int main()
{
    srand(time(NULL));//FUN��O PARA N�O REPEtIR A FILA
    setlocale(LC_ALL, "Portuguese");//FUN��O PARA ACEITAR OS CARACTERES DO PORTUGUES
    int opc=0, e;
    pilha *p = (pilha*) malloc(sizeof(pilha));
    fila  *f = (fila*)  malloc(sizeof (fila));
    creatfila(f);//CRIANDO FILA
    creatpilha(p);//CrIANDO ILHA
    //CHAMANDO MENUS DE OP��ES
    while(opc != 3)
    {
        system("cls");
        mostra(f, p);
        printf("\n----ESCOLHA A OP��O DESEJADA----");
        printf("\n1-ENFILERA");
        printf("\n2-EMPILHA");
        printf("\n3-FINALIZAR");
        scanf("%d",&opc);
        switch (opc){
            case 1:{//ENFILEIRANDO
                e = rand() % 1000; //DEFININDO UM NUMERO ALEATORIO PARA FILA
                printf("\n|%d|",e);
                enfilera(f, e);
                system("pause");
                break;
            }
            case 2:{//EMPILHANDO
                if(f->ini == NULL)//CASO N�O HAJA NENHUM VALOR NA FIlA
                {
                    printf("\nPOR VAFOR INSIRA UM VALOR A FILA PARA DEPOIS EMPILHAR");
                }
                else{
                    e = desenfilera(f);
                    printf("\nO valor |%d| ser� adicionado a pilha\n",e);
                    system("pause");
                    empilha(p,e);
                }
                break;
            }
            case 3:{//ENCERRANDO
                opc =3;
                printf("\nENCERRANDO");
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
