#include <stdio.h>

int main() {
    int ordem[10], carta;

    scanf("%d", &carta);

    ordem[0] = 4;
    ordem[1] = 5;
    ordem[2] = 6;
    ordem[3] = 7;
    ordem[4] = 12;
    ordem[5] = 11;
    ordem[6] = 13;
    ordem[7] = 1;
    ordem[8] = 2;
    ordem[9] = 3;

    for (int i = 0; i < 10; i++) {
        if (carta == ordem[i]) {
            carta = i;
            break; //MUITO IMPORTANTE ESSE BREAK PRO LOOP NÃO CONTINUAR RODANDO DEPOIS DE ACHAR UM VALOR EQUIVALENTE
        }
    }

    printf("valor convertido %d\n", carta);

    for (int i = 0; i < 10; i++) {
        if (carta == i) {
            carta = ordem[i];
            break; //BREAK MUITO IMPORTANTE DE NOVO. e novamente pelo mesmo motivo: pro loop não continuar buscando valore se ele já tiver encontrado um 
        }
    }

    printf("valor original %d", carta);

    return 0;
}