#include "Livro.c"

typedef struct {
    Livro livros[100];
    int primeiro, ultimo;
} Estante;

void FEVazia(Estante* estante);

int EehVazia(Estante* estante);

int InsereLivro(Estante* estante, Livro* livro);

int RetiraLivro(Estante* estante, int apLivro, Livro* livro);

void ImprimeEstante(Estante* estante);