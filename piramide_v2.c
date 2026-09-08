#include <stdio.h>

int main () {
    int altura, valor = 0, i, j;

    scanf("%d", &altura);

    for (i = 0; i < altura; i++) {
        for (j = altura-i; j > 0; j--) {
            printf(" ");
        }

        for (j = 0; j < i - 1 + valor; j++) {
            printf("*");
        }

        valor++;
        printf("\n");
    }
}
