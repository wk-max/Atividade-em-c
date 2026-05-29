/* [#6] Receba o salário de um funcionário e o percentual de aumento, calcule e mostre o 
valor do aumento e o novo salário. */

#include <stdio.h>

int main() {

    float salario, percentual_aumento;
    float valor_aumento, novo_salario;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento (em porcentagem): ");
    scanf("%f", &percentual_aumento);

    valor_aumento = salario * (percentual_aumento / 100);
    novo_salario = salario + valor_aumento;

    printf("O valor do aumento é: %.2f\n", valor_aumento);
    printf("O novo salário é: %.2f\n", novo_salario);
    
    return 0;
}