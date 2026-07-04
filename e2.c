// Temos dois vetores, v1 (5 elementos) e v2 (8 elementos). Esse programa imprime todos os elementos comuns aos dois vetores

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int i, j, max, v1[5], v2[8];

    srand(time(NULL));

    printf("Insira o maior valor do intervalo de numeros aleatorios: ");
    scanf("%d", &max);

    for (i = 0; i < 8; i++) {
        v2[i] = rand() % max;
        
        if (i < 5) {
            v1[i] = rand() % max;
            printf("v1: %d     ", v1[i]);
        }

        printf("v2: %d\n", v2[i]);
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 5; j++) {
            if (v1[j] == v2[i]) {
                printf("%d\n", v1[i]);
            }
        }
    }

    return 0;
}