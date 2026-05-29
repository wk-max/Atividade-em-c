/* [#44] Elaborar um algoritmo que leia um vetor A com 10 elementos do tipo cadeia. Construir 
um vetor B de mesma dimensão e tipo que o vetor A. O último elemento do vetor A deve ser o 
primeiro elemento do vetor B, o penúltimo elemento do vetor A deve ser o segundo do vetor B 
até que o primeiro elemento do vetor A seja o último do vetor B. Ordenar e apresentar os 
elementos do vetor B de forma crescente. */

#include <stdio.h>
#include <string.h>

int main(void) {
    char A[10][100];
    char B[10][100];

    for (int i = 0; i < 10; ++i) {
        printf("A[%d]: ", i);
        if (scanf("%99s", A[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }

    for (int i = 0; i < 10; ++i) strcpy(B[i], A[9 - i]);

    for (int i = 0; i < 9; ++i) {
        for (int j = i+1; j < 10; ++j) {
            if (strcmp(B[i], B[j]) > 0) {
                char tmp[100]; strcpy(tmp, B[i]); strcpy(B[i], B[j]); strcpy(B[j], tmp);
            }
        }
    }

    printf("Vetor B ordenado (crescente):\n");
    for (int i = 0; i < 10; ++i) printf("%s\n", B[i]);
    return 0;
}
