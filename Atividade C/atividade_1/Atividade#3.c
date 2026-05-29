/*[#3] Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, 
utilizando a fórmula PRESTACAO <- VALOR +VALOR * (TAXA/100)*TEMPO_MES*/

#include <stdio.h>
int main() {
    float valor, taxa;
    int tempo_mes;
    float prestacao;

    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa);
    printf("Digite o tempo em meses: ");
    scanf("%d", &tempo_mes);

    prestacao = valor + valor * (taxa / 100) * tempo_mes;

    printf("O valor da prestação em atraso é: %.2f\n", prestacao);

    return 0;
}