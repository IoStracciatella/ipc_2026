#include <stdio.h>

// Criando um struct pra definir as propriedades do atleta, tempo em segundos, ms e n de faltas
struct atleta {
    int tempo_s;
    int tempo_ms;
    int faltas;
};

// Declarando as funções antes do main() porque eu decidi escrever as funções depois do main() pra me organizar melhor
void desempate(int v, int n, int i, struct atleta atletas[], int *classificados, int *ultimo_classificado);
void classificar(int v, int n, struct atleta atletas[], int *classificados, int *ultimo_classificado);

int main() {
    int v, n, classificados = 0, ultimo_classificado = 0;
    struct atleta atletas[50];

    scanf("%d %d", &v, &n);

    // Preenchemos o array de atletas com os valores das propriedades de cada atleta
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &atletas[i].tempo_s, &atletas[i].tempo_ms, &atletas[i].faltas);
    }

    // Chamamos a função que classifica os atletas, passando a posição da memória de classificados e ultimo_classificado
    // para podermos alterar o valor dessas variáveis dentro da função, usando ponteiros. Assim, a função pode retornar
    // mais de um valor  
    classificar(v, n, atletas, &classificados, &ultimo_classificado);

    // Esse if serve pra printar "Nenhum atleta foi classificado." ao invés de "0 atletas foram classificados", como o exercício pede
    if (classificados != 0) {
        printf("%d atletas foram classificados.\n", classificados);
        printf("O ultimo classificado foi o atleta numero %d.\n", ultimo_classificado);
    } else {
        printf("Nenhum atleta foi classificado.");
    }

    return 0;
}

// Definimos a função que classifica os atletas
void classificar(int v, int n, struct atleta atletas[], int *classificados, int *ultimo_classificado) {
    // Usamos essa int tempo para podermos transformar os dois tempos, um em segundo, o outro em ms em apeas um valor de tempo, do tipo float
    float tempo;

    // Varrermos todo o array de atletas passado no parâmetro, verificando quais atletas seguem os critérios necessários para serem classificados
    for (int i = 0; i < n; i++) {
        tempo = atletas[i].tempo_s + (atletas[i].tempo_ms / 1000.0);

        if (tempo < 12.1) {
            if (atletas[i].faltas < 3) {
                (*classificados)++;
                *ultimo_classificado = i+1;
            }
        } else if (atletas[i].faltas == 0) {
            (*classificados)++;

            *ultimo_classificado = i+1;
        }

        tempo = 0;

        // Verificamos se há atletas empatados chamando a função de desempate
        desempate(v, n, i, atletas, classificados, ultimo_classificado);
    }
}

// A função de desempate verifica se há atletas com propriedades iguais. Ela faz isso iterando i vezes, varrendo todos os valores
// no array de atletas em busca atletas iguais. Se tiver algum, ela utiliza o desempate
void desempate(int v, int n, int i, struct atleta atletas[], int *classificados, int *ultimo_classificado) {
    for (int j = i-1; j >= 0; j--) {
        if (v > n && atletas[i].tempo_s == atletas[j].tempo_s &&
            atletas[i].tempo_ms == atletas[j].tempo_ms &&
            atletas[i].faltas == atletas[j].faltas) {
                (*classificados)++;
                *ultimo_classificado = i+1;
        }
    }
}
