/* [#23] Criar um algoritmo que leia os limites inferior e superior de um intervalo e 
imprima todos os números pares no intervalo aberto e seu somatório. Suponha que os dados 
digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o segundo. */

#include <stdio.h>

int main(void) {
    int inferior, superior;
    int i, soma = 0;

    printf("Limite inferior: ");
    if (scanf("%d", &inferior) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    printf("Limite superior: ");
    if (scanf("%d", &superior) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    printf("Numeros pares no intervalo aberto (%d, %d):\n", inferior, superior);
    for (i = inferior + 1; i < superior; ++i) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("Somatorio = %d\n", soma);

    return 0;
}
