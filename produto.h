#include "tproduto.h"

#define MAX_PROD 100
typedef struct sProduto
{
    Tprod tprods [MAX_PROD];
    int tamanho;
    int ref;
    }Produto;

int acrestentaTprod( Produto *t, Tprod a);
int procura( Produto t, int numero);
Produto criarProduto();
void imprimeProduto(Produto *t);

void save(Produto t);
Produto read();
