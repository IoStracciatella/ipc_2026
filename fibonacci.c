#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int b = 1;
    int c = 1;
    int d;
    
    printf("0");
    printf("%d\n", b);
    printf("%d\n", b);

    for (int i = 0; i < a; i++) {
        d = b + c;
        c = b;
        b = d;

        printf("%d\n", d);
    }

    return 0;
}

//quase morri pra fazer esse código e entender essa lógica. tudo isso porque eu não tava pensando no caso n=1 e n=2 primeiro
//eu tava pensando logo em n casos. aí eu não consegui formular a lógica e fiquei tipo 1 hora sem sair do lugar
