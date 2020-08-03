#include <stdio.h>
#include <stdlib.h>

int main() {

    int *pnt;
    pnt = (int*) malloc(sizeof(int));
    
    *pnt = 10;

    printf("\n pnt = %d\n", pnt);
    printf("variavel = *pnt = %d\n\n", *pnt);

    return 0;
}
