// Fiz esse código pelo celular

#include <stdio.h>

int main() {
    double p, q, n, a, b, c, delta, x, y, soma;
    
    soma = 0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf", &p, &q);
    scanf("%lf", &n);

    x = p;
    
    delta = q - p;
    delta = delta/n;
    
    for (int i = 0; i < n; i++) {
        y = a*(x*x) + b*x + c;
        y = y*delta;
        
        x += delta;
        soma += y;
    }
    
    printf("%lf", soma);

    return 0;
}

