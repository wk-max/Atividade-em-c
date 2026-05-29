/* [#9] Receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. */

#include <stdio.h>
#include <math.h>

int main(void) {

	double a, b;
    
	printf("Digite o valor do primeiro cateto: ");
	if (scanf("%lf", &a) != 1) { fprintf(stderr, "Entrada inválida.\n"); return 1; }
	printf("Digite o valor do segundo cateto: ");
	if (scanf("%lf", &b) != 1) { fprintf(stderr, "Entrada inválida.\n"); return 1; }

	if (a < 0) a = fabs(a);
	if (b < 0) b = fabs(b);

	double h = sqrt(a * a + b * b);

	printf("Hipotenusa = %.2f\n", h);

	return 0;
}