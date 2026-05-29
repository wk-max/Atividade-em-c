/* [#30] Os alunos de informática tiveram cinco provas (uma de cada matéria/disciplina): 1, 2, 3, 4 e 5. 
Considere aprovado o aluno com nota igual ou superior a 7.0. Criar um algoritmo que leia o Nome dos 
alunos e as suas respectivas cinco notas. Inicialmente o algoritmo deve perguntar quantos alunos
 existem na turma e deve também imprimir:
 
- Nome dos que foram aprovados em todas as matérias;
- Nome dos alunos aprovados nas matérias 1 e 4;
- A porcentagem dos aprovados na matéria 3. */

#include <stdio.h>
#include <string.h>

int main(void) {
    int N, i, j;
    char nome[100];
    double nota;
    int aprovados_mat3 = 0;

    printf("Quantidade de alunos: ");
    if (scanf("%d", &N) != 1 || N <= 0) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

    for (i = 0; i < N; ++i) {
        printf("Nome do aluno: ");
        if (scanf("%99s", nome) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }

        double notas[5];
        int aprovou_todas = 1;
        int aprovou_1e4 = 1;

        for (j = 0; j < 5; ++j) {
            printf("Nota %d: ", j+1);
            if (scanf("%lf", &notas[j]) != 1) { fprintf(stderr, "Entrada invalida.\n"); return 1; }
            if (notas[j] < 7.0) aprovou_todas = 0;
            if ((j == 0 || j == 3) && notas[j] < 7.0) aprovou_1e4 = 0;
        }

        if (notas[2] >= 7.0) aprovados_mat3++;

        if (aprovou_todas) printf("Aprovado em todas: %s\n", nome);
        if (aprovou_1e4) printf("Aprovado em 1 e 4: %s\n", nome);
    }

    double perc = (double)aprovados_mat3 * 100.0 / N;
    printf("Porcentagem de aprovados na materia 3 = %.2f%%\n", perc);

    return 0;
}
