#include <stdio.h>

int main() {
    int n, contador = 0, maior_valor = 0, brinquedos[100];
    
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Insira um valor valido.");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &brinquedos[i]);

        if (brinquedos[i] < 0 || brinquedos[i] > 100) {
            printf("Insira um valor valido.");
            return 1;
        }

        if (brinquedos[i] == 0) {
            contador++;
        }

        if (maior_valor < brinquedos[i]) {
            maior_valor = brinquedos[i];
        }
    }

    if (contador == n) {
        printf("Algum dos valores deve ser nao nulo.");
    }

    for (int i = maior_valor; i > 0; i--) {
        for (int j = 0; j < n; j++) {
            if (brinquedos[j] == i) {
                printf("1 ");
                brinquedos[j]--;
            } else {
                printf("0 ");
            }
        }

        printf("\n");
    }

    return 0;
}