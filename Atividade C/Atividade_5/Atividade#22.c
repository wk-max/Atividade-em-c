/* [#22] Ler valores positivos inteiros até que um valor negativo seja informado. 
Ao final devem ser apresentados o maior e o menor valores informados pelo usuário. */

#include <stdio.h>

int main(void) {
    int x;
    int maior = 0, menor = 0;
    int count = 0;

    printf("Digite valores positivos (digite um negativo para encerrar):\n");
    while (1) {
        if (scanf("%d", &x) != 1) {
            fprintf(stderr, "Entrada invalida.\n");
            return 1;
        }
        if (x < 0) break;
        if (count == 0) { maior = menor = x; }
        else {
            if (x > maior) maior = x;
            if (x < menor) menor = x;
        }
        count++;
    }

    if (count == 0) {
        printf("Nenhum valor positivo informado.\n");
    } else {
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
    }

    return 0;
}
