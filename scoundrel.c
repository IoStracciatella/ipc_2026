#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    struct carta {
        int numero, naipe;
    };

    struct carta cartas[44];
    int indice_carta = 0, cont = 15;

    //=====sdfsdfsdfsdfsdf

    for (int i = 0; i < 4; i++) {
        if (i > 1) {
            cont = 11;
        }

        for (int j = 2; j < cont; j++) {
            cartas[indice_carta].numero = j;
            cartas[indice_carta].naipe = i;

            indice_carta++;
        }
    }

    printf("=====================================================\n");
    printf("  ____                            _           _ \n");
    printf(" / ___|  ___ ___  _   _ _ __   __| |_ __ ___| |\n");
    printf(" \\___ \\ / __/ _ \\| | | | '_ \\ / _` | '__/ _ \\ |\n");
    printf("  ___) | (_| (_) | |_| | | | | (_| | | |  __/ |\n");
    printf(" |____/ \\___\\___/ \\__,_|_| |_|\\__,_|_|  \\___|_|\n");
    printf("=====================================================\n");
    printf("     Digite qualquer coisa para iniciar!\n");
    printf("=====================================================\n");
    scanf(" ");

    return 0;
}
