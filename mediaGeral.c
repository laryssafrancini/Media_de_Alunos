#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char nome[100];
    float mediaDisc1;
    float mediaDisc2;
    float mediaGeral;
    int classificacao;
} Aluno;
float calcularMediaGeral(float media1, float media2) {
    return (media1 + media2) / 2.0;
}
int compararMedias(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    if (alunoB->mediaGeral > alunoA->mediaGeral) return 1;
    else if (alunoB->mediaGeral < alunoA->mediaGeral) return -1;
    else return 0;
}
int main() {
    system("clear");
    int n, i;
    printf("Informe o número de alunos: ");
    scanf("%d", &n);
    getchar();
    Aluno alunos[n];
    for (i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;
        printf("Digite a média da disciplina 1: ");
        scanf("%f", &alunos[i].mediaDisc1);
        printf("Digite a média da disciplina 2: ");
        scanf("%f", &alunos[i].mediaDisc2);
        getchar();
        alunos[i].mediaGeral = calcularMediaGeral(alunos[i].mediaDisc1, alunos[i].mediaDisc2);
    }
qsort(alunos, n, sizeof(Aluno), compararMedias);
    for (i = 0; i < n; i++) {
        alunos[i].classificacao = i + 1;
    }
    FILE *arquivo = fopen("classificacao_alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    float somaMedias = 0;
    for (i = 0; i < n; i++) {
        fprintf(arquivo, "Nome do Aluno: %s\n", alunos[i].nome);
        fprintf(arquivo, "Média Disciplina 1: %.2f\n", alunos[i].mediaDisc1);
        fprintf(arquivo, "Média Disciplina 2: %.2f\n", alunos[i].mediaDisc2);
        fprintf(arquivo, "Média Geral: %.2f\n", alunos[i].mediaGeral);
        fprintf(arquivo, "Classificação: %d\n\n", alunos[i].classificacao);
        somaMedias += alunos[i].mediaGeral;
    }
    float mediaTurma = somaMedias / n;
    fprintf(arquivo, "Média Geral da Turma: %.2f\n", mediaTurma);
    fclose(arquivo);
    printf("Arquivo 'classificacao_alunos.txt' gerado com sucesso.\n");
    return 0;
}