#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void FEVazia(Estante* estante) {
    estante->primeiro = 0;
    estante->ultimo = estante->primeiro;
}

int EehVazia(Estante* estante) {
    return(estante->ultimo == estante->primeiro);
}

int InsereLivro(Estante* estante, Livro* livro) {
    if(estante->ultimo == 100) return 0;
    estante->livros[estante->ultimo++] = *livro;
    return 1;
}

int RetiraLivro(Estante* estante, int apLivro, Livro* livro) {
    int cont;

    if(EehVazia(estante) || apLivro >= estante->ultimo || apLivro < 0) return 0;

    *livro = estante->livros[apLivro];

    estante->ultimo--;

    for(cont = apLivro+1; cont <= estante->ultimo; cont++)
        estante->livros[cont-1] = estante->livros[cont];
    return 1;
}

void ImprimeEstante(Estante* estante) {
    int i;
    for(i=estante->primeiro; i<estante->ultimo; i++)
        Imprime(&estante->livros[i]);
}