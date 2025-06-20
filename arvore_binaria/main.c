#include <stdio.h>
#include "arvore_binaria.h"

int main() {
    No* raiz = NULL;

    // Inserção
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Em ordem: ");
    emOrdem(raiz);
    printf("\n");

    printf("Pré-ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Pós-ordem: ");
    posOrdem(raiz);
    printf("\n");

    // Remoção
    raiz = remover(raiz, 30);
    printf("\nApós remover 30 (tem 1 filho):\n");
    emOrdem(raiz);
    printf("\n");

    raiz = remover(raiz, 70);
    printf("\nApós remover 70 (tem 2 filhos):\n");
    emOrdem(raiz);
    printf("\n");

    raiz = remover(raiz, 20);
    printf("\nApós remover 20 (folha):\n");
    emOrdem(raiz);
    printf("\n");

    // Liberação de memória
    liberarArvore(raiz);
    return 0;
}

