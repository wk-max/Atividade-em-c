/* [#20] Permitir ao usuário escolher entre a conversão de medida de centímetros em polegadas, 
de polegadas em centímetros, de quilômetros em milhas e de milhas em quilômetros. As fórmulas 
para conversão são as seguintes:
a) Centímetros/polegadas: valor em centímetros x 0.3937
b) Polegadas/centímetros: valor em polegadas x 2.54
c) Quilômetros/milhas: valor em quilômetros x 0.6214
d) Milhas/quilômetros: valor em milhas x 1.6093 */

#include <stdio.h>

int main(void) {
    int opcao;
    double valor, resultado;

    printf("Escolha a conversao:\n");
    printf("1) Centimetros -> Polegadas\n");
    printf("2) Polegadas -> Centimetros\n");
    printf("3) Quilometros -> Milhas\n");
    printf("4) Milhas -> Quilometros\n");
    printf("Opcao (1-4): ");
    if (scanf("%d", &opcao) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    switch (opcao) {
        case 1:
            printf("Valor em centimetros: ");
            if (scanf("%lf", &valor) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
            resultado = valor * 0.3937;
            printf("%.4f centimetros = %.4f polegadas\n", valor, resultado);
            break;
        case 2:
            printf("Valor em polegadas: ");
            if (scanf("%lf", &valor) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
            resultado = valor * 2.54;
            printf("%.4f polegadas = %.4f centimetros\n", valor, resultado);
            break;
        case 3:
            printf("Valor em quilometros: ");
            if (scanf("%lf", &valor) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
            resultado = valor * 0.6214;
            printf("%.4f km = %.4f milhas\n", valor, resultado);
            break;
        case 4:
            printf("Valor em milhas: ");
            if (scanf("%lf", &valor) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
            resultado = valor * 1.6093;
            printf("%.4f milhas = %.4f km\n", valor, resultado);
            break;
        default:
            fprintf(stderr, "Opcao invalida.\n");
            return 1;
    }

    return 0;
}
