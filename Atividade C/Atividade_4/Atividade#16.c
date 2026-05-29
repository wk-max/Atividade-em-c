/* [#16] Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado da multiplicação
 somente se o resultado for maior que 30 e menor que 100. */

#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = numero * 2;

    if (resultado > 30 && resultado < 100) {
        printf("O resultado da multiplicação é: %d\n", resultado);
    } else {
        printf("O resultado não está dentro do intervalo desejado.\n");
    }

    return 0;
}
