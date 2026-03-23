/*ATENÇÃO: Esse código foi feito porcamente. Não era pra eu ter usado a função ceil() da biblioteca math, isso
apelação. Da pra pensar em métodos matemáticos pra arrendondar um valor decimal pra cima, ou pra retornar*/ 

#include <stdio.h>
#include <math.h>

int main() {

    float tamanho;
    printf("Digite a área da parede a ser pintada: ");
    scanf("%f", &tamanho);

    float litros = tamanho/3;
    float latas = litros/18;

    latas = ceil(latas);

    float preco = latas*80;

    printf("O valor que será pago para a pintura é %.2f R$, e a quantidade de latas que serão usadas serão %.0f latas", preco, latas);

    return 0;
}