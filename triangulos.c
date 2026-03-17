#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c && c == a) {
            printf("triangulo equilatero");
        } else if (a == b || b == c || c == a) {
            printf("triangulo isoceles");
        } else if (a != b && b != c && c != a) {
            printf("triangulo escaleno");
        }
    } else { printf("nao eh triangulo"); }

    return 0;
}
