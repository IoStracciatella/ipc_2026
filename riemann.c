// Fiz esse código pelo celular
// No loop for é n+2 pra corrigir o fato que o < faz ele parar 2 índice antes do que deveria, porque na matemática o somatório da soma de Riemann vai de 0 até n inclusive, e como aqui a gente usa < e começa e termina o índice em n-1, a gentr tem que corrigir


#include <stdio.h>

int main() {
    double p, q, n, a, b, c, delta, x, y, soma;
    
    soma = 0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf", &p, &q);
    scanf("%lf", &n);
    
    delta = q - p;
    delta = delta/n;
    
    for (int i = 0; i < n+2; i++) {
        x += delta;
        y = a*(x*x) + b*x + c;
        y = y*delta;
        
        soma += y;
    }
    
    printf("%lf", soma);

    return 0;
}
