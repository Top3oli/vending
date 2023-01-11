#include<string.h>
#include<stdio.h>
#include "produto.h"

void menu();


int main(int argc, char const *argv[])
{
    Produto t = read();
    menu(&t);

    return 0;
}


void menu (Produto *t){

    int opcao; 
    do{
        printf(" Máquina de venda de Bebidas\n");
        printf(" 1 - Inserir Produtos\n 2 - Consultar Produtos\n 0- Sair\n\n");
        printf("Introduza a opção pretendida: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                acrestentaTprod(t, criarTproduto());
                break;
            case 2:
                imprimeProduto(t);
                break;
            case 0: 
                save(*t);
                break;
            default:
                break;
        }
    } while (opcao != 0);
}
