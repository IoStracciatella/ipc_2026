/*
Um for realiza uma iteração para cada unidade de altura da pirâmide, e para cada iteração desse for, um outro for
itera uma quantidade de vezes que aumenta de 2 em 2, começando em 1. Assim, a largura da base aumenta em 2 para
cada iteração. Os espaços são colocados para centralizar a pirâmide, para cada linhas, serão impressos uma quanti
dade altura - i de espaços, assim, conforme a pirâmide aumenta, menos espaços são impressos
*/

#include <stdio.h>

int main() {
    int altura, indice = 1;

    printf("Digite a altura da piramide: ");
    scanf("%d", &altura);

    if (altura <= 0) {
        printf("Entrada invalida.");
        return 0;
    }

    for (int i = 0; i < altura; i++) {
        for (int k = 0; k < altura - i; k++) {
            printf(" ");
        }

        for (int j = 0; j < indice; j++) {
            printf("%d", i);
        }
        
        indice+=2;
        printf("\n");
    }

    return 0;
}