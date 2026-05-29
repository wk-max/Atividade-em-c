/* [#41] Elaborar um algoritmo que leia 8 elementos inteiros em um vetor. Coloque-os 
em ordem decrescente e apresente os elementos ordenados; */

#include <stdio.h>

int main(void) {
    int v[8];
    for (int i = 0; i < 8; ++i) {
        printf("Elemento %d: ", i+1);
        if (scanf("%d", &v[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }

    for (int i = 0; i < 7; ++i) {
        int max_idx = i;
        for (int j = i+1; j < 8; ++j) if (v[j] > v[max_idx]) max_idx = j;
        if (max_idx != i) {
            int tmp = v[i]; v[i] = v[max_idx]; v[max_idx] = tmp;
        }
    }

    printf("Vetor ordenado (decrescente):\n");
    for (int i = 0; i < 8; ++i) printf("%d\n", v[i]);
    return 0;
}
