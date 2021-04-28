/*
    Suponha que um dado problema requer o uso de duas pilhas, onde cada
    pilha suporta no máximo 10 elementos. Implementar a estrutura de dados
    de empilhar e desempilhar para estas duas pilhas.  (dinâmica)

VINICIUS GABRIEL
DATA:10/04/2021
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
void empilha (pilha *p, int e)
{
    Tpilha *novo = (Tpilha*)malloc(sizeof(Tpilha));
    novo ->item = e;
    novo ->ant = p->topo;
    p->topo = novo;

}
int desempilha(pilha *p)
{
    int e;
    Tpilha *aux = (Tpilha*) malloc(sizeof(Tpilha));
    aux = p->topo;
    p->topo=aux->ant;
    aux->ant=NULL;
    e = aux->item;

    free(aux);
    return e;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int item,cont1=0,cont2=0,n;
    pilha *p1 = (pilha*) malloc(sizeof(pilha));
    pilha *p2 = (pilha*) malloc(sizeof(pilha));
    creatpilha(p1);
    creatpilha(p2);
    int opc = 0;
    while(opc!=5)
    {
        printf("\n ==== ESCOLHA UMA OPÇÂO ====");
        printf("\n1-EMPILHA 1° PILHA");
        printf("\n2-EMPILHA 2° PILHA");
        printf("\n3-DESEMPILHAR 1° PILHA");
        printf("\n4-DESEMPILHAR 2° PILHA");
        printf("\n5-SAIR\n");
        fflush(stdin);
        scanf("%d",&opc);
        switch(opc){
            case 1:{
                system("cls");
                if(cont1<10)
                {
                    printf("\nDIGITE UM VALOR: ");
                    fflush(stdin);
                    scanf("%d",&item);
                    empilha(p1,item);
                    cont1++;
                }
                else{
                     printf("\nPILHA CHEIA!");
                }
                break;


            }
            case 2:{
                system("cls");
                if(cont2<10)
                {
                    printf("\nDIGITE UM VALOR: ");
                    fflush(stdin);
                    scanf("%d",&item);
                    empilha(p2,item);
                    cont2++;
                }
                else{
                     printf("\nPILHA CHEIA!");
                }
                break;
            }

            case 3:{
                system("cls");
                n=desempilha(p1);
                cont1--;
                printf("\nVAlOR [%d] REMOVIDO",n);
                break;
            }
            case 4:{
                system("cls");
                n=desempilha(p2);
                cont2--;
                printf("\nVAlOR [%d] REMOVIDO",n);
                break;
            }
            case 5:{
                system("cls");
                opc=5;
                printf("\nPROGRAMA FINALIZADO!");
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
