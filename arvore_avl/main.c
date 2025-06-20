#include <stdio.h>
#include "arvore_avl.h"

int main() {
    No* raiz = NULL;

    int valores[] = {10, 20, 30, 40, 50, 25};
    int n = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < n; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    printf("Pré-ordem (estrutura AVL): ");
    preOrdem(raiz);
    printf("\n");

    printf("Em ordem: ");
    emOrdem(raiz);
    printf("\n");

    raiz = remover(raiz, 20);
    printf("\nApós remover 20:\n");
    printf("Em ordem: ");
    emOrdem(raiz);
    printf("\n");

    liberarArvore(raiz);
    return 0;
}
