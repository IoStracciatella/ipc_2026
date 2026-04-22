#include <stdio.h>

int main() {
    int numero, algarismos[50], contador, soma;
    scanf("%d", &numero);
    
    soma = 0;
    
    do {
        
        contador = 0;
        
        while (numero != 0) {
            algarismos[contador] = numero % 10;
            numero/10;
            contador++;
        }
        
        for (int i = 0; i < contador; i++) {
            soma += algarismos[i];
        }
        
        numero = soma;
    } while (numero > 9);
    
    printf("%d", numero);
    
    return 0;
}
