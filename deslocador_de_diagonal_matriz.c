#include <stdio.h>

int main() {
    int ordem, deslocamento, i, j;

    scanf("%d %d", &ordem, &deslocamento);

    if (ordem <= 0 || deslocamento >= ordem || deslocamento <= -ordem) {
        printf("valor invalido");
    } else {
        i = 0;
        while (i < ordem) {
            //reiniciando j para cada iteração para ele
            j = 0;

            while (j < ordem) {
                //consertando o == no if
                if (j == i + deslocamento && deslocamento > 0) {
                    printf("1");
                } else {
                    if (i == j - deslocamento && deslocamento < 0) {
                        printf("1");
                    } else {
                        if (i == j && deslocamento == 0) {
                            printf("1");
                        } else {
                            printf("0");
                        }
                    }
                }

                if (j < ordem - 1) {
                    printf(" ");
                }

                j = j + 1;
            }

            printf("\n");
            i = i + 1;
        }
    }

    return 0;
}
