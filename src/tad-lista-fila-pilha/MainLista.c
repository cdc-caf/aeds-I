#include <stdio.h>
#include "Lista.c"

int main() {
    Livro livro1, livro2, livro3, livroRetirada;
    Estante estante1;
    int numPag, disp;

    Inicializa(&livro1, "Introduction to Algorithms", "Thomas H. Cormen", 1203, 1, 100);
    Inicializa(&livro2, "Projetos de Algoritmos", "Nivio Ziviani", 288, 0, 101);
    Inicializa(&livro3, "Contemporary Logic Design", "Randy H. Katz", 608, 1, 102);

    FEVazia(&estante1);
    InsereLivro(&estante1, &livro1);
    InsereLivro(&estante1, &livro2);
    InsereLivro(&estante1, &livro3);

    printf("\nEstante Atual\n");
    ImprimeEstante(&estante1);

    RetiraLivro(&estante1, 1, &livroRetirada);

    printf("\nNova Estante\n");
    ImprimeEstante(&estante1);

    return 0;
}