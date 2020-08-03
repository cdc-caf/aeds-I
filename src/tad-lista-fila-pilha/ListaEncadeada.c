//Implementação com cabeça
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

void FEVazia(Estante* estante) {
    estante->pPrimeiro = (Apontador) malloc(sizeof(Celula));
    estante->pUltimo = estante->pPrimeiro;
    estante->pPrimeiro->pProx = NULL;
}

int EehVazia(Estante* estante) {
    return(estante->pPrimeiro == estante->pUltimo);
}

int InsereLivro(Estante* estante, Livro* livro) {
    estante->pUltimo->pProx = (Apontador) malloc(sizeof(Celula));
    estante->pUltimo = estante->pUltimo->pProx;
    estante->pUltimo->livro = *livro;
    estante->pUltimo->pProx = NULL;
}

int RetiraLivro(Estante* estante, Livro* livro) {
    Apontador pAux;
    if(EehVazia(estante)) return 0;

    *livro = estante->pPrimeiro->pProx->livro;
    pAux = estante->pPrimeiro;
    estante->pPrimeiro = estante->pPrimeiro->pProx;
    free(pAux);
    return 1;
}

void ImprimeEstante(Estante* estante) {
    Apontador pAux;
    pAux = estante->pPrimeiro->pProx;
    while (pAux != NULL) {
        Imprime(&pAux->livro);
        pAux = pAux->pProx;
    }
}