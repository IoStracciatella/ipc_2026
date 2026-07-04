// Código para calcular a soma dos N primeiros múltiplos de um inteiro K

#include <stdio.h>

int main () {
    int n, k, i, indice = 0, soma = 0;

    scanf("%d %d", &n, &k);

    if (n < 0 || k < 0) {
        printf("Insira um valor valido.");
        return 1;
    }

    for (i = k+1; indice < n; i++) {
        if (i % k == 0) {
            soma += i;
            indice++;
        }
    }

    printf("%d", soma);

    return 0;
}