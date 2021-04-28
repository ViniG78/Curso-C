/*
    Desenvolva uma função para testar se uma pilha P1 tem mais elementos que uma pilha P2.

Vinicius Gabriel
data:10/04/2001
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct Tpilha{
    int item;
    struct Tpilha *ant;
}Tpilha;
typedef struct pilha{
    Tpilha *topo;
}pilha;
void creatpilha(pilha *p)
{
    p->topo = NULL;
}
void empilha (pilha *p, int e, int *cont)
{
    Tpilha *novo = (Tpilha*)malloc(sizeof(Tpilha));
    novo ->item = e;
    novo ->ant = p->topo;
    p->topo = novo;
   *cont=*cont+1;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont1=0,cont2=0,item;
    pilha *p1 = (pilha*) malloc(sizeof(pilha));
    pilha *p2 = (pilha*) malloc(sizeof(pilha));
    creatpilha(p1);
    creatpilha(p2);
    int opc = 0;
    while(opc!=4)
    {
        printf("\n ==== ESCOLHA UMA OPÇÂO ====");
        printf("\n1-EMPILHA 1° PILHA");
        printf("\n2-EMPILHA 2° PILHA");
        printf("\n3-VERIFICAR MAIOR");
        printf("\n4-SAIR\n");
        fflush(stdin);
        scanf("%d",&opc);
        switch(opc){
            case 1:{
                system("cls");
                printf("\nDIGITE UM VALOR: ");
                fflush(stdin);
                scanf("%d",&item);
                empilha(p1,item,&cont1);
                printf("%d",cont1);
                break;
            }
            case 2:{
                system("cls");
                printf("\nDIGITE UM VALOR: ");
                fflush(stdin);
                scanf("%d",&item);
                empilha(p2,item,&cont2);
                printf("%d",cont2);
                break;
            }
            case 3:{
                system("cls");
                if(cont1==cont2)
                    printf("\n AS PILHAS POSSUEM O MESMO TAMANHO!\n");
                else if(cont1>cont2)
                        printf("\nA 1° PILHA È MAIOR!\n");
                     else
                        printf("\nA 2° PILHA È MAIOR!\n");

                system("pause");

                break;
            }
            case 4:{
                system("cls");
                opc=4;
                printf("\nPROGRAMA FINALIZADO!");
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
