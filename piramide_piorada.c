/*
Esse código é uma versão piorada do código piramide.c

Eu fiz ele usando uma lógica meio diferente, que faz
menos sentido do que a primeira 

A mudança de lógica de um código pro outro é a sgeuinte: No código piramide.c, o loop j itera aumentando 2 iterações a cada iteração do loop i
Já nesse código, o loop j itera de 0 até i, aumentando 1 iteação a cada iteração do loop i. É subtraído 1 pra não ficar 1 linha a mais na pirâmide.
*/

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
