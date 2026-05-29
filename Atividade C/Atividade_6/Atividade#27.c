/* [#27] Fazer um algoritmo para ler uma quantidade N de alunos. Ler a nota de cada um dos N alunos
 e calcular a média aritmética das notas. Contar quantos alunos estão com a nota acima de 5.0. Obs.:
  Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem: “Não há nenhum aluno com nota acima de 5.” */

#include <stdio.h>

int main(void) {
    int N, i;
    double nota, soma = 0.0;
    int acima5 = 0;

    printf("Quantidade de alunos: ");
    if (scanf("%d", &N) != 1 || N <= 0) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    for (i = 0; i < N; ++i) {
        printf("Nota do aluno %d: ", i+1);
        if (scanf("%lf", &nota) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
        soma += nota;
        if (nota > 5.0) acima5++;
    }

    double media = soma / N;
    printf("Media da turma = %.2f\n", media);
    if (acima5 == 0)
        printf("Nao ha nenhum aluno com nota acima de 5.\n");
    else
        printf("Alunos com nota acima de 5.0 = %d\n", acima5);

    return 0;
}
