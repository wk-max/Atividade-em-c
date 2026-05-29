/* [#18] Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis 
A, B, C e D. Apresentar apenas os valores que sejam divisíveis por 2 e 3. */

#include <stdio.h>

int main(void) {
    int A, B, C, D;

    printf("Digite A: "); if (scanf("%d", &A) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    printf("Digite B: "); if (scanf("%d", &B) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    printf("Digite C: "); if (scanf("%d", &C) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
    printf("Digite D: "); if (scanf("%d", &D) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    printf("Valores divisiveis por 2 e 3:\n");
    if (A % 6 == 0) printf("%d\n", A);
    if (B % 6 == 0) printf("%d\n", B);
    if (C % 6 == 0) printf("%d\n", C);
    if (D % 6 == 0) printf("%d\n", D);

    return 0;
}
