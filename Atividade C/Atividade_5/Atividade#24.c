/* [#24] Calcular a área total em metros de uma residência com os cômodos sala, cozinha, banheiro,
dois quartos, área de serviço, quintal, garagem, entre outros que podem ser fornecidos. O algoritmo 
deve solicitar a entrada do nome, da largura e do comprimento de um determinado cômodo. Em seguida, 
deve apresentar a área do cômodo lido e também uma mensagem solicitando ao usuário a confirmação de
continuar calculando novos cômodos. Caso o usuário responda “NÃO”, o programa deve apresentar o
valor total acumulado da área residencial. */

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    double largura, comprimento;
    double area, total = 0.0;
    char resp = 'S';

    while (resp != 'N' && resp != 'n') {
        printf("Nome do comodo: ");
        if (scanf("%99s", nome) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
        printf("Largura (m): "); if (scanf("%lf", &largura) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
        printf("Comprimento (m): "); if (scanf("%lf", &comprimento) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

        area = largura * comprimento;
        total += area;
        printf("Area do comodo %s = %.2f m2\n", nome, area);

        printf("Continuar calculando novos comodos? (S/N): ");
        scanf(" %c", &resp);
    }

    printf("Area total acumulada = %.2f m2\n", total);
    return 0;
}
