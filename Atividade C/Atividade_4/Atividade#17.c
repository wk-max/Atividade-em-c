/* [#17] Fazer a leitura de um valor numérico inteiro qualquer e apresentá-lo caso não seja maior que 
3. Dica: para a solução deste problema utilize apenas o operador lógico de negação. */

#include <stdio.h>
int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (!(valor > 3)) {
        printf("O valor digitado é: %d\n", valor);
    } else {
        printf("O valor é maior que 3, não será apresentado.\n");
    }

    return 0;
}