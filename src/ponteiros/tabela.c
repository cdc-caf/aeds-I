#include <stdio.h>

int main() {

    int a;
    int *pnt;
    int **pnt_pnt;
    int ***pnt_pnt_pnt;

    a = 10;
    pnt = &a;
    pnt_pnt = &pnt;
    pnt_pnt_pnt = &pnt_pnt;

    printf("\n");
    printf("variavel |  valor\n");
    printf("   a     |  %d\n ", a);
    printf("\n\n");

    printf("variavel |  valor\n");
    printf("  pnt    |  %d\n", pnt);
    printf("  *pnt   |  %d\n", *pnt);
    printf("\n\n");

    printf("  variavel  |  valor\n");
    printf(" pnt_pnt    |  %d\n", pnt_pnt);
    printf(" *pnt_pnt   |  %d\n", *pnt_pnt);
    printf(" **pnt_pnt  |  %d\n", **pnt_pnt);
    printf("\n\n");

    printf("    variavel    |  valor\n");
    printf(" pnt_pnt_pnt    |  %d\n", pnt_pnt_pnt);
    printf(" *pnt_pnt_pnt   |  %d\n", *pnt_pnt_pnt);
    printf(" **pnt_pnt_pnt  |  %d\n", **pnt_pnt_pnt);
    printf(" ***pnt_pnt_pnt |  %d\n", ***pnt_pnt_pnt);
    printf("\n\n");

    return 0;
}
