// O loop começa em numero - 1 e vai até numero 1 porque na operação de fatorial não multiplicamos o número por ele mesmo

#include <stdio.h>

int main() {
    int numero, i;
    
    scanf("%d", &numero);
    
    for (i = numero - 1; i > 1; i--) {
        numero = numero * i;
    }
    
    printf("%d", numero);
    
    return 0;
}
