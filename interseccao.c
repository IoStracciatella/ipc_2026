#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tam, *c1, *c2, *ci;
    
    printf("Insira o tamanho dos conjuntos: ");
    scanf("%d", &tam);

    c1 = malloc(tam * sizeof(int));
    c2 = malloc(tam * sizeof(int));
    ci = malloc(tam * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < tam; i++) {
        c1[i] = rand() % 10;
        c2[i] = rand() % 10;
    }

    int contador = 0;

    for (int i = 0; i < tam; i ++) {
        if (c1[i] == c2[i]) {
            ci[contador] = c1[i];
            contador++;
        }
    }

    printf("O conjunto 1 eh: { ");

    for (int i = 0; i < tam; i++) {
        printf("%d ", c1[i]);
    }

    printf("}\n");

    printf("O conjunto 2 eh: { ");

    for (int i = 0; i < tam; i++) {
        printf("%d ", c2[i]);
    }

    printf("}\n");

    printf("O conjunto intersecao eh: { ");

    for (int i = 0; i < contador; i++) {
        printf("%d ", ci[i]);
    }

    printf("}");

    free(c1);
    free(c2);
    free(ci);

    return 0;
}