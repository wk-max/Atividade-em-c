/* [#7] Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre  a idade dessa pessoa e
 quantos anos ela será em 2050. */

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual;
    int idade_atual, idade_2050;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade_atual = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento;

    printf("A idade atual da pessoa é: %d anos\n", idade_atual);
    printf("A idade da pessoa em 2050 será: %d anos\n", idade_2050);

    return 0;
}