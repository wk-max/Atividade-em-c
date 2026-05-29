/* [#45] Escrever um algoritmo que leia 15 elementos do tipo inteiro em um vetor A. Depois 
solicitar um valor qualquer e verificar se este valor está contido no vetor A, realizando
 uma pesquisa BINÁRIA. */

#include <stdio.h>

int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    int A[15];
    for (int i = 0; i < 15; ++i) {
        printf("A[%d]: ", i);
        if (scanf("%d", &A[i]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    }

    for (int i = 0; i < 14; ++i) {
        for (int j = i+1; j < 15; ++j) {
            if (A[i] > A[j]) { int tmp = A[i]; A[i] = A[j]; A[j] = tmp; }
        }
    }

    int chave;
    printf("Valor a pesquisar: ");
    if (scanf("%d", &chave) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    int idx = binary_search(A, 15, chave);
    if (idx >= 0) printf("Valor encontrado em A[%d] (apos ordenacao)\n", idx);
    else printf("Valor nao encontrado no vetor.\n");

    return 0;
}
