// Fiz esse código pelo celular
/*
O funcionamento é simples: O código só simula a fórmula da soma de riemann. O única sacada que tina que ter aqui que não é tão óbvia é que 
o f(x) na fórmula equivale a altura de cada retângulo. Pra calcular isso, você tem que calcular o valor da função quadrática no ponto centro
de cada retângulo no eixo x. Ou seja, você tem que descobrir qual a largura de cada retângulo e ir calculando o y pra cada x no centro de cada
retâgulo. Você sabe qual a largure de cada rertângulo através do delta
*/

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

