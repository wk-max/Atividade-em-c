/* [#42] Elaborar um algoritmo que leia 2 vetores A e B com 12 elementos reais cada. 
Construir um vetor C de mesmo tipo que seja formado pelo produto de cada elemento correspondente 
aos vetores A e B. Montar o trecho de pesquisa SEQUENCIAL para pesquisar os elementos existentes 
no vetor C. */


#include <stdio.h>
#include <math.h>

int main(void) {
    double A[12], B[12], C[12];
    for (int i = 0; i < 12; ++i) {
        printf("A[%d]: ", i);
        if (scanf("%lf", &A[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }
    for (int i = 0; i < 12; ++i) {
        printf("B[%d]: ", i);
        if (scanf("%lf", &B[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }

    for (int i = 0; i < 12; ++i) C[i] = A[i] * B[i];

    printf("Vetor C (produto A*B):\n");
    for (int i = 0; i < 12; ++i) printf("C[%d] = %.6f\n", i, C[i]);

    double chave;
    printf("Valor a pesquisar em C: ");
    if (scanf("%lf", &chave) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    int encontrado = 0;
    const double EPS = 1e-9;
    for (int i = 0; i < 12; ++i) {
        if (fabs(C[i] - chave) < EPS) {
            printf("Valor encontrado em C[%d]\n", i);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Valor nao encontrado no vetor C.\n");

    return 0;
}
