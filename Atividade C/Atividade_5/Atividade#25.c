/* [#25] Dado um país A, com 5000000 de habitantes e 
uma taxa de natalidade de 3% ao ano, e um país B com 
7000000 de habitantes e uma taxa de natalidade de 2% 
ao ano, escrever um algoritmo que seja capaz de calcular 
e iterativamente e no fim imprimir o tempo necessário para que a população do país 
A ultrapasse a população do país B. */

#include <stdio.h>

int main(void) {
    double A = 5000000.0;
    double B = 7000000.0;
    double taxaA = 0.03;
    double taxaB = 0.02;
    int anos = 0;

    while (A <= B) {
        A += A * taxaA;
        B += B * taxaB;
        anos++;
        if (anos > 10000) break; 
    }

    printf("Anos necessarios = %d\n", anos);
    printf("Populacao A = %.0f\n", A);
    printf("Populacao B = %.0f\n", B);
    return 0;
}
