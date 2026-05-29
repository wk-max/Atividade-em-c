/* [#5] Converter uma temperatura dada em Celsius para Farenheit e Kelvin. */

#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;

    printf("A temperatura em Farenheit é: %.2f\n", fahrenheit);
    printf("A temperatura em Kelvin é: %.2f\n", kelvin);

    return 0;
}