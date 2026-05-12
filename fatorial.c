// O loop vai até numero - 1 porque na operação de fatorial não multiplicamos o número por ele mesmo

#include <stdio.h>

int main () {
    int numero, resultado;
    scanf("%d", &numero);

    resultado = numero;

    for (int i = numero-1; i > 0; i--) {
        resultado = resultado * i;
    }

    printf("%d", resultado);

    return 0;
}
