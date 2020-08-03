#include <stdio.h>
#include <string.h>
#include "Livro.h"

void Inicializa(Livro* livro, char tit[50], char aut[50], int numeroPag, int disp, int id) {
    strcpy(livro->titulo, tit);
    strcpy((*livro).autor, aut);
    livro->numeroPaginas = numeroPag;
    livro->disponivel = disp;
    (*livro).id = id;
}

void AlteraDisponibilidade(Livro* livro, int disp) {
    livro->disponivel = disp;
}

void Imprime(Livro* livro) {
    printf("Titulo: %s\n", livro->titulo);
    printf("Autor: %s\n", livro->autor);
    printf("Numero de Paginas: %d\n", livro->numeroPaginas);
    if(livro->disponivel == 1) {printf("Livro Disponivel\n");}
    else {printf("Livro Indisponivel\n");}
    printf("Codigo do Livro: %d\n\n", livro->id);
}
