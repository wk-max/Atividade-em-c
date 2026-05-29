/* [#28] Criar um algoritmo que leia idade e sexo (0-masculino, 1-feminino) de várias pessoas.  
Calcule e imprima a idade média, o total de pessoas do sexo feminino com idade entre 30-45 
inclusive e o número total de pessoas do sexo masculino. O algoritmo termina quando se digita 
um número negativo para a idade. */

#include <stdio.h>

int main(void) {
    int idade, sexo;
    int count = 0;
    int totalM = 0, fem30_45 = 0;
    long long soma_idades = 0;

    printf("Digite idade e sexo (0-masculino,1-feminino). Idade negativa encerra.\n");
    while (1) {
        printf("Idade: ");
        if (scanf("%d", &idade) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
        if (idade < 0) break;
        printf("Sexo (0-M,1-F): ");
        if (scanf("%d", &sexo) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

        count++;
        soma_idades += idade;
        if (sexo == 0) totalM++;
        else if (sexo == 1) {
            if (idade >= 30 && idade <= 45) fem30_45++;
        }
    }

    if (count == 0) {
        printf("Nenhuma pessoa informada.\n");
        return 0;
    }

    double media_idade = (double)soma_idades / count;
    printf("Idade media = %.2f\n", media_idade);
    printf("Total de mulheres com 30-45 anos = %d\n", fem30_45);
    printf("Total de homens = %d\n", totalM);

    return 0;
}
