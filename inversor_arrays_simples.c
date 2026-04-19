#include <stdio.h>

int main() {
    int valores[100], valores_inv[100], tam;
    
    scanf("%d", &tam);
    
    for (int i = 0; i < tam; i++) {
        scanf("%d", &valores[i]);
    }
    
    for (int i = 0; i < tam; i++) {
        valores_inv[i] = valores[(tam-1)-i];
    }
    
    for (int i = 0; i < tam; i++) {
        printf("%d", valores_inv[i]);
    }

    return 0;
}
