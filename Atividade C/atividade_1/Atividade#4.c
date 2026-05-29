/* [#4] Apresente o valor da conversão em dólar (U$) de um valor lido em real (R$). O algoritmo
 deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário.*/

#include <stdio.h>
int main() {
    float cotacao_dolar, valor_reais;
    float valor_dolar;

    printf("Digite a cotação do dólar (em reais): ");
    scanf("%f", &cotacao_dolar);
    printf("Digite a quantidade de reais disponível: ");
    scanf("%f", &valor_reais);

    valor_dolar = valor_reais / cotacao_dolar;

    printf("O valor em dólares é: U$ %.2f\n", valor_dolar);

    return 0;
}