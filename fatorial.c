#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int aux = 1;

    for (int i = a; i > 0; i--) {
        aux = aux * i;
    }

    printf("%d", aux);

    return 0;
}