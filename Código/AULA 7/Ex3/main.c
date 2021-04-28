/*
 Desenvolva uma função para testar se duas pilhas P1 e P2 são iguais.
VINICIUS GABRIEL
DATA;10/04/2021
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
    int item,n1,n2,cont=0;
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
        printf("\n3-VERIFICAR VALORES DENTRO DAS PILHAS");
        printf("\n4-SAIR\n");
        fflush(stdin);
        scanf("%d",&opc);
        switch(opc){
            case 1:{
                system("cls");
                printf("\nDIGITE UM VALOR: ");
                fflush(stdin);
                scanf("%d",&item);
                empilha(p1,item);
                break;
            }
            case 2:{
                system("cls");
                printf("\nDIGITE UM VALOR: ");
                fflush(stdin);
                scanf("%d",&item);
                empilha(p2,item);
                break;
            }
            case 3:{
                system("cls");
                while(p1->topo->ant!=NULL)
                {
                   n1=desempilha(p1);
                   n2=desempilha(p2);
                   if(n1!=n2)
                     cont++;
                }
                if(cont!=0)
                  printf("\nAS PILHAS SÂO DIFERENTES!\n");
                else
                    printf("\n AS PILHAS SÂO IGUAIS\n");


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
