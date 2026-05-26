#include <stdio.h>

int ProbabilidadeDaCor(int qtde_cores, int cor, int cores[50]);

int main() {
    int qtde_cores, cor, sorteios, cores[50];
    float m_erro;

    scanf("%d", &qtde_cores);

    for (int i = 0; i < qtde_cores; i++) {
        scanf("%d", &cores);
    }

    scanf("%d", &cor);
    scanf("%d %f", &sorteios, &m_erro);

    int prob = ProbabilidadeDaCor(qtde_cores, cor, cores);

    printf("%d", prob);

    return 0;
}

float ProbabilidadeDaCor(int qtde_cores, int cor, int cores[50]) {
    int cores_total = 0;
    int qtde_cor = cores[cor];
    int probabilidade = 0;

    cores[cor] = 0;

    for (int i = 0; i < qtde_cores; i++) {
        cores_total += cores[i];
    }

    probabilidade = qtde_cor/cores_total;
    probabilidade = probabilidade*100;

    return probabilidade;
}
