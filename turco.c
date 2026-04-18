#include <stdio.h>

int main() {
    int cartas[4], naipes[4], maior_carta, naipe_maior_carta;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &cartas[i]);
        scanf("%d", &naipes[i]);
        
        if (cartas[i] > 7 && cartas[i] < 11) {
            printf("Entrada invalida.");
            return 0;
        } else if (cartas[i] < 1 || cartas[i] > 13 || naipes[i] < 0 || naipes[i] > 3) {
            printf("Entrada invalida.");
            return 0;
        }
        
        if (cartas[i] == 3) {
            cartas[i] = 13;
        } else if (cartas[i] == 2) {
            cartas[i] = 12;
        } else if (cartas[i] == 1) {
            cartas[i] = 11;
        } else if (cartas[i] == 13) {
            cartas[i] = 10;
        } else if (cartas[i] == 11) {
            cartas[i] = 9;
        } else if (cartas[i] == 12) {
            cartas[i] = 8;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        if (cartas[i] == cartas[3]) {
            cartas[i] = 14;
        }
    }
    
    maior_carta = cartas[0];
    
    for (int i = 0; i < 2; i++) {
        if (maior_carta < cartas[i+1]) {
            maior_carta = cartas[i+1];
            naipe_maior_carta = naipes[i+1];
        } else if (maior_carta == cartas[i+1]) {
            if (naipes[i] > naipes[i+1]) {
                maior_carta = cartas[i+1];
                naipe_maior_carta = naipes[i+1];
            }
        }
    }
    
    for (int i = 0; i < 2; i++) {
        if (maior_carta == 14) {
            maior_carta = cartas[3];
        } else if (cartas[i] == 12) {
            cartas[i] = 2;
        } else if (cartas[i] == 11) {
            cartas[i] = 1;
        } else if (cartas[i] == 10) {
            cartas[i] = 13;
        } else if (cartas[i] == 9) {
            cartas[i] = 11;
        } else if (cartas[i] == 8) {
            cartas[i] = 12;
        }
    }
    
    printf("%d %d", maior_carta, naipe_maior_carta);
    
    return 0;
}#include <stdio.h>

int main() {
    int cartas[4], naipes[4], maior_carta, naipe_maior_carta, manilha;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &cartas[i]);
        scanf("%d", &naipes[i]);
        
        if (cartas[i] > 7 && cartas[i] < 11) {
            printf("Entrada invalida.");
            return 0;
        } else if (cartas[i] < 1 || cartas[i] > 13 || naipes[i] < 0 || naipes[i] > 3) {
            printf("Entrada invalida.");
            return 0;
        }
        
        if (cartas[i] == 3) {
            cartas[i] = 13;
        } else if (cartas[i] == 2) {
            cartas[i] = 12;
        } else if (cartas[i] == 1) {
            cartas[i] = 11;
        } else if (cartas[i] == 13) {
            cartas[i] = 10;
        } else if (cartas[i] == 11) {
            cartas[i] = 9;
        } else if (cartas[i] == 12) {
            cartas[i] = 8;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        if (cartas[i] == cartas[3]) {
            cartas[i] = 14;
        }
    }
    
    maior_carta = cartas[0];
    manilha = cartas[i+1];
    
    if (manilha == 8) {
        manilha == 11;
    }
    
    for (int i = 0; i < 2; i++) {
        if (maior_carta < cartas[i+1]) {
            maior_carta = cartas[i+1];
            naipe_maior_carta = naipes[i+1];
        } else if (maior_carta == cartas[i+1]) {
            if (naipes[i] > naipes[i+1]) {
                maior_carta = cartas[i+1];
                naipe_maior_carta = naipes[i+1];
            }
        }
    }
    
    for (int i = 0; i < 2; i++) {
        if (maior_carta == 14) {
            maior_carta = cartas[3];
        } else if (cartas[i] == 12) {
            cartas[i] = 2;
        } else if (cartas[i] == 11) {
            cartas[i] = 1;
        } else if (cartas[i] == 10) {
            cartas[i] = 13;
        } else if (cartas[i] == 9) {
            cartas[i] = 11;
        } else if (cartas[i] == 8) {
            cartas[i] = 12;
        }
    }
    
    printf("%d %d", maior_carta, naipe_maior_carta);
    
    return 0;
}
