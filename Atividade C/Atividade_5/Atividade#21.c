/* [#21] Faça um algoritmo, para apresentar o total da soma obtida dos cem primeiros 
números inteiros positivos. */

#include <stdio.h>

int main(void) {
    int i, soma = 0;
    for (i = 1; i <= 100; ++i) soma += i;
    printf("Soma dos 100 primeiros inteiros positivos = %d\n", soma);
    return 0;
}
