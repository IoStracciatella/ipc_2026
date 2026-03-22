//Um quadrado mágico é uma matriz quadrada em que a soma de todas as linhas e de todas as colunas é igual. Exemplo: Se eu somar
//todos os elementos de uma linha i, o resultad será igual a somar todos os elementos de uma coluna j.

//Para implementar isso no código

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

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            soma += matriz[j][i];
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
