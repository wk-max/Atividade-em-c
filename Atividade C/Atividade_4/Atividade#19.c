/* [#19] Leia uma nota numérica (número real) codificada entre 0  e 10. Em seguida converta essa 
nota para a correspondente em conceito, segundo dados abaixo.
A = acima ou igual a 9.0
B = inferior a 9.0 e superior ou igual a 7.0
C = inferior a 7.0 e superior ou igual a 5.0
D = inferior a 5.0 e superior ou igual a 2.5
E = inferior a 2.5 */

#include <stdio.h>

int main(void) {
    double nota;

    printf("Digite a nota (0.0 - 10.0): ");
    if (scanf("%lf", &nota) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    if (nota < 0.0 || nota > 10.0) {
        fprintf(stderr, "Nota fora do intervalo.\n");
        return 1;
    }

    if (nota >= 9.0)
        printf("Conceito: A\n");
    else if (nota >= 7.0)
        printf("Conceito: B\n");
    else if (nota >= 5.0)
        printf("Conceito: C\n");
    else if (nota >= 2.5)
        printf("Conceito: D\n");
    else
        printf("Conceito: E\n");

    return 0;
}
