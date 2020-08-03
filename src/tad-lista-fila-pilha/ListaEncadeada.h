#include "Livro.c"

typedef struct Celula* Apontador;

typedef struct Celula {
    Livro livro;
    //struct Celula* pProx;
    Apontador pProx;
} Celula;

typedef struct {
    Apontador pPrimeiro;
    Apontador pUltimo;
} Estante;

void FEVazia(Estante* estante);

int EehVazia(Estante* estante);

int InsereLivro(Estante* estante, Livro* livro);

int RetiraLivro(Estante* estante, Livro* livro);

void ImprimeEstante(Estante* estante);