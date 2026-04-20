//Código que encontra o maior número em um array

#include <stdio.h>

int main() {
    int numeros[8], maior_numero;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }
    
    maior_numero = numeros[0];

    for (int i = 0; i < 8; i++) {
        if (maior_numero < numeros[i]) {
            maior_numero = numeros[i];
        }
    }

    printf("%d", maior_numero);

    return 0;
}
