#include <stdio.h>

struct atleta {
    int tempo_s;
    int tempo_ms;
    int faltas;
};

void classificar(int v, int n, struct atleta atletas[], int *classificados, int *ultimo_classificado);

int main() {
    int v, n, classificados = 0, ultimo_classificado = 0;
    struct atleta atletas[50];

    scanf("%d %d", &v, &n);

    for (int i = 0; i < v; i++) {
        scanf("%d %d %d", &atletas[i].tempo_s, &atletas[i].tempo_ms, &atletas[i].faltas);
    }

    classificar(v, n, atletas, &classificados, &ultimo_classificado);

    printf("%d atletas foram classificados.\n", classificados);
    printf("O ultimo classificado foi o atleta numero %d.\n", ultimo_classificado);

    return 0;
}

void classificar(int v, int n, struct atleta atletas[], int *classificados, int *ultimo_classificado) {
    int ultimo = -1;
    float tempo;

    for (int i = 0; i < n; i++) {
        tempo = atletas[i].tempo_s + (atletas[i].tempo_ms / 1000.0);

        if (*classificados < v) {
            if (tempo < 12.1) {
                if (atletas[i].faltas < 3) {
                    (*classificados)++;
                }
            } else if (atletas[i].faltas == 0) {
                (*classificados)++;
            }

            *ultimo_classificado = i+1;
            ultimo = i;
        } else {
            if (atletas[i].tempo_s == atletas[ultimo].tempo_s &&
                atletas[i].tempo_ms == atletas[ultimo].tempo_ms &&
                atletas[i].faltas == atletas[ultimo].faltas) {
                
                (*classificados)++;
                *ultimo_classificado = i+1;
            } 
        }
    }
}
