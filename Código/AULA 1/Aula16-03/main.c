#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct end{
    char rua;
    char n;
    char bairro;
}end;
typedef struct aluno{
    int cod;
    char nome;
    int idade;
    end e;
}aluno;
void func_vet(aluno *vet)
{

        printf("\n CADASTRO DO ALUNO");
        printf("\nNOME: ");
        fflush(stdin);
        gets(&vet[0].nome);


        *vet++;


}
int main()
{
    aluno vet[4];
    func_vet(&vet);
    printf("\n");
    return 0;
}
