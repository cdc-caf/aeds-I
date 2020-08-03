typedef struct Livro {
    char titulo[50];
    char autor[50];
    int numeroPaginas;
    int disponivel;
    int id;
} Livro;

void Inicializa(Livro* livro, char tit[50], char aut[50], int numeroPag, int disp, int id);

void AlteraDisponibilidade(Livro* livro, int disp);

void Imprime(Livro* livro);