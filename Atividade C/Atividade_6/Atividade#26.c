/* [#26] Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares
 e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura 
 será zero. */

#include <stdio.h>

int main(void) {
    int x;
    int count = 0;
    int pares = 0, impares = 0;
    long long soma_total = 0;
    long long soma_pares = 0;

    printf("Digite numeros positivos (0 para terminar):\n");
    while (1) {
        if (scanf("%d", &x) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
        if (x == 0) break;
        if (x < 0) continue; 
        count++;
        soma_total += x;
        if (x % 2 == 0) { pares++; soma_pares += x; }
        else impares++;
    }

    if (count == 0) {
        printf("Nenhum numero positivo informado.\n");
        return 0;
    }

    double media_geral = (double)soma_total / count;
    if (pares > 0)
        printf("Quantidade pares=%d, impares=%d, media pares=%.2f, media geral=%.2f\n", pares, impares, (double)soma_pares / pares, media_geral);
    else
        printf("Quantidade pares=0, impares=%d, media pares=N/A, media geral=%.2f\n", impares, media_geral);

    return 0;
}
