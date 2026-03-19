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
