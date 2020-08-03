#include <stdio.h>
#include <string.h>

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int numeroPaginas;
    int id;
} Livro;

int main() {
    Livro livro1;

    strcpy(livro1.titulo, "Introduction to Algorithms");
    strcpy(livro1.autor, "Thomas H. Cormen");
    livro1.numeroPaginas = 1203;
    livro1.id = 1;

    printf("%s\n", livro1.titulo);
    printf("%d", livro1.numeroPaginas);

    return 0;
}