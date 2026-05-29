/* [#43] Elaborar um algoritmo que leia 2 vetores A e B com 10 elementos inteiros cada.
 Construir um vetor C de mesmo tipo e dimensão que seja formado pela soma dos quadrados 
 de cada elemento correspondentes dos vetores A e B. Ordenar e apresentar o vetor C em 
 ordem decrescente. */

#include <stdio.h>

int main(void) {
    int A[10], B[10];
    long long C[10];
    for (int i = 0; i < 10; ++i) {
        printf("A[%d]: ", i);
        if (scanf("%d", &A[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }
    for (int i = 0; i < 10; ++i) {
        printf("B[%d]: ", i);
        if (scanf("%d", &B[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }

    for (int i = 0; i < 10; ++i) C[i] = (long long)A[i]*A[i] + (long long)B[i]*B[i];

    for (int i = 0; i < 9; ++i) {
        int max_idx = i;
        for (int j = i+1; j < 10; ++j) if (C[j] > C[max_idx]) max_idx = j;
        if (max_idx != i) { long long tmp = C[i]; C[i] = C[max_idx]; C[max_idx] = tmp; }
    }

    printf("Vetor C ordenado (decrescente):\n");
    for (int i = 0; i < 10; ++i) printf("%lld\n", C[i]);
    return 0;
}
