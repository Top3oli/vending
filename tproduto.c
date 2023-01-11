#include "tproduto.h"
#include <stdio.h>
#include <string.h>

Tprod criarTproduto()
{
    Tprod a;

    printf("Introduza o novo Produto: \n");
    fflush(NULL);

    fgets(a.nome, MAX_NOME - 1, stdin);
    printf("%s", a.nome);

    printf("Introduza o numero: \n");

    scanf("%d", &a.numero);

    return a;
}

void imprimeTprod(Tprod a)
{
    printf("Id Produto %d  \n\t", a.numero);
}
