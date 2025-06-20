#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

typedef struct no {
    int valor;
    struct no* esquerda;
    struct no* direita;
} No;

// Operações
No* inserir(No* raiz, int valor);
No* remover(No* raiz, int valor);
No* buscar(No* raiz, int valor);

// Percursos
void emOrdem(No* raiz);
void preOrdem(No* raiz);
void posOrdem(No* raiz);

// Utilitários
void liberarArvore(No* raiz);

#endif
