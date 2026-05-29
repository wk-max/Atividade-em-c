/* [#29] Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce
 3 centímetros por ano. Construir um algoritmo que calcule iterativamente e imprima quantos 
 anos serão necessários para que Juca seja maior que Chico. */

#include <stdio.h>

int main(void) {
    double chico = 1.50; 
    double juca  = 1.10;
    double crescimento_chico = 0.02; /* 2 cm = 0.02 m */
    double crescimento_juca  = 0.03; /* 3 cm = 0.03 m */
    int anos = 0;

    while (juca <= chico) {
        chico += crescimento_chico;
        juca  += crescimento_juca;
        anos++;
        if (anos > 10000) break; 
    }

    printf("Anos necessarios = %d\n", anos);
    printf("Altura Juca = %.2fm, Chico = %.2fm\n", juca, chico);
    return 0;
}
