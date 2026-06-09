// A lógica é ir testando: Qual o maior valor que cabe dentro desse número? E então subtraindo esse valor, e testando de novo, com os valores de cada numeral romano.
// E cada vez que tal valor couber dentro do número, é colocado o caractere correspondente a ele na string "letras", que contém o número em algarismos romanos

#include <stdio.h>

int main() {
    int numero, indice = 0;
    char letras[50];

    printf("Informe um numero decimal: ");
    scanf("%d", &numero);

    while (numero != 0) {
        if ((numero / 1000) > 0) {
            numero -= 1000;
            letras[indice] = 'M';
            indice++;
        } else if ((numero / 500) > 0) {
            numero -= 500;
            letras[indice] = 'D';
            indice++;
        } else if ((numero / 100) > 0) {
            numero -= 100;
            letras[indice] = 'C';
            indice++;
        } else if ((numero / 50) > 0) {
            numero -= 50;
            letras[indice] = 'L';
            indice++;
        } else if ((numero / 10) > 0) {
            numero -= 10;
            letras[indice] = 'X';
            indice++;
        } else if (numero < 10) {
            if (numero == 1) {
                letras[indice] = 'I';
            } else if (numero == 2) {
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'I';
            } else if (numero == 3) {
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'I';
            } else if (numero == 4) {
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'V';
            } else if (numero == 5) {
                letras[indice] = 'V';
            } else if (numero == 6) {
                letras[indice] = 'V';
                indice++;
                letras[indice] = 'I';
            } else if (numero == 7) {
                letras[indice] = 'V';
                indice++;
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'I';
            } else if (numero == 8) {
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'X';
            } else if (numero == 9) {
                letras[indice] = 'I';
                indice++;
                letras[indice] = 'X';
            }

            numero = 0;
        }
    }

    printf("O numero romano correspondente eh: %s", letras);

    return 0;
}
