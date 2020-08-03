#include <stdio.h>

int main() {

    int a;
    int b;
    int *pnt_a;
    int *pnt_b;
    int *pnt_teste;

    a = 10;
    b = 15;
    pnt_a = &a;
    pnt_b = &b;

    /* Testando modificações */
    pnt_teste = pnt_b;
    // *pnt_teste = 22;
    // pnt_teste = pnt_a;
    // *pnt_teste = 22;
    // a = 10;
    // b = 15;
    /* Fim dos testes */

    printf("\n");
    printf(" variavel   |  valor\n");
    printf("    a       |  %d\n\n", a);
    printf("    b       |  %d\n\n", b);
    printf("   pnt_a     |  %d\n", pnt_a);
    printf("  *pnt_a     |  %d\n\n", *pnt_a);
    printf("   pnt_b     |  %d\n", pnt_b);
    printf("  *pnt_b     |  %d\n\n", *pnt_b);
    printf("  pnt_teste |  %d\n", pnt_teste);
    printf(" *pnt_teste |  %d\n\n", *pnt_teste);

    return 0;
}
