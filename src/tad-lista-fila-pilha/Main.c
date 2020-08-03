#include <stdio.h>
#include "Livro.c"

int main() {
    Livro livro1;
    int numPag, disp;

    printf("Qual o numero de paginas? ");
    scanf("%d", &numPag);
    printf("Livro diponivel? ");
    scanf("%d", &disp);

    Inicializa(&livro1, "Introduction to Algorithms", "Thomas H. Cormen", numPag, disp, 100);

    Imprime(&livro1);

    printf("\nLivro diponivel?");
    scanf("%d", &disp);

    AlteraDisponibilidade(&livro1, disp);

    Imprime(&livro1);

    return 0;
}