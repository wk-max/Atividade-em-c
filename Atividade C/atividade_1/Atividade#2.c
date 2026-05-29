/* [#2] Obter e atribuir um valor randômico a uma variável inteira...utiliza-se
 a função randômica da ferramenta de pseudocódigo (u.sorteia(valor_inicial, valor_final)
  no Studio).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valor_inicial, valor_final;
    int valor_randômico;

    printf("Digite o valor inicial: ");
    scanf("%d", &valor_inicial);
    printf("Digite o valor final: ");
    scanf("%d", &valor_final);

    srand(time(0));

    valor_randômico = rand() % (valor_final - valor_inicial + 1) + valor_inicial;

    printf("O valor randômico gerado é: %d\n", valor_randômico);

    return 0;
}
