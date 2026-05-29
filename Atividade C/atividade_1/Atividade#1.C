/*[#1] Leia três valores numéricos inteiros (representados pelas variáveis A, B e C) e 
apresente como resultado final o valor da soma dos quadrados dos três valores lidos.*/

#include <stdio.h>

int main() {
    int A, B, C;
    int soma_quadrados;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    soma_quadrados = A * A + B * B + C * C;

    printf("A soma dos quadrados dos três valores lidos é: %d\n", soma_quadrados);

    return 0;
}