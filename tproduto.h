
#define MAX_NOME 100
typedef struct stprod{
    char nome[MAX_NOME];
    int numero;
    
    int ref;
} Tprod;

Tprod criarTproduto();

void imprimeTprod(Tprod a);

