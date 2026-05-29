/* [#8] Receba o peso de uma pessoa, calcule e mostre dois novos pesos, se a pessoa engordar 15% e 
se emagrecer 20% sobre o peso digitado. */

#include <stdio.h>

int main() {

    float peso, peso_engordar, peso_emagrecer;

    printf("Digite o peso da pesoa (em kg): ");
    scanf("%f", &peso);

    peso_engordar = peso + (peso * 0.15);
    peso_emagrecer = peso - (peso * 0.20);

    printf("Se a pessoa engordar 15%%, o novo peso será: %.2f kg\n", peso_engordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso será: %.2f kg\n", peso_emagrecer);
    
    return 0;
}