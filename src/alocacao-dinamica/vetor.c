#include <stdio.h>
#include <stdlib.h>

int main() {

    int *pnt_vetor;
    int N = 4;
    pnt_vetor = (int*) malloc(N * sizeof(int));
    
    pnt_vetor[0] = 10;
    pnt_vetor[1] = 15;
    pnt_vetor[2] = 20;
    pnt_vetor[3] = 22;

    printf("\npnt_vetor = %d\n", pnt_vetor);
    printf("valores: %d %d %d %d\n\n",  pnt_vetor[0], 
                                        pnt_vetor[1], 
                                        pnt_vetor[2], 
                                        pnt_vetor[3]);

    return 0;
}
