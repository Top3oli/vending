#include<stdio.h>
#include "produto.h"

int acrestentaTprod( Produto *t, Tprod a){
    a.ref = t->ref;
    t->ref++;
    if(t->tamanho == MAX_PROD) return -1;
    t->tprods[t->tamanho++] = a;
    return 0;
}

int procura(Produto t, int numero){
    for (int i = 0; i < t.tamanho; i++){
        if(t.tprods[i].numero == numero) return i;
    }
    return -1;
}

Produto criarProduto(){
    Produto t;
    t.tamanho = 0;
    return t;
}

void imprimeProduto(Produto *t){
    for (int i = 0; i < t->tamanho; i++)
        imprimeTprod(t->tprods[i]);   
        
}

void save(Produto t){
    FILE *f;
    f = fopen("dados.dat", "wb");
    fwrite(&t, sizeof(Produto), 1, f);
    fclose(f);
}

Produto read(){
    Produto t;
    t = criarProduto();
    FILE *f;
    f = fopen("dados.dat", "rb");
    if (f == NULL) return t;
    fread(&t, sizeof(Produto), 1, f);
    fclose(f);
    return t;
}

