#include <stdio.h>

int main() {
    
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    int soma_aux = 0;

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }

        if (soma != soma_aux && i > 0) {
            printf("nao eh quadrado magico");
            return 0;
        } else { 
            soma_aux = soma;
            soma = 0;
        }
    }

    printf("eh quadrado magico");

    return 0;
}