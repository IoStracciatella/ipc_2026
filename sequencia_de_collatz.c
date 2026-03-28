#include <stdio.h>

int main() {
    //armazenando o valor inserido pelo usuário
    int a;
    scanf("%d", &a);

    /*nesses 2 condicionais if, verificamos se o valor inserido pelo usuário é válido, e se ele é igual a 1
    mas por que? porque o valor tem que ser positivo e inteiro, caso contrário, o algoritmo não funciona. 
    já a verificação se o valor é 1 é feita porque 1 é um caso especial, que também causa erros no algoritmo.
    então, tratamos 1 como caso especial*/
    if (a < 0) {
        printf("valor invalido");
        return 1;
    }

    if (a == 1) {
        printf("(1)\n0");
        return 0;
    }

    printf("(%d, ", a);

    /*Aqui, temos o loop principal, que irá rodar até que o valor inserido pelo usuário seja = 1. para cada iteração
    iremos verificar se o número é par ou ímpar, verificando se a divisão por 2 tem resto, e caso ele seja par,
    dividiremos por caso, caso seja ímpar, multiplicaremos por 3 e adicionaremos 1. também, incrementaremos a
    variável contador para saber quantas iterações foram necessárias para o valor inserido pelo usuário convergir para 1
    */
    int contador = 0;
    while (a != 1) {

        contador = contador + 1;

        if (a%2 == 0) {
            a = a/2;
        } else { 
            a = (a*3) + 1;
        } 

        printf("%d", a);

        if (a != 1) { 
            //Imprimindo as vírgulas e os espaços caso o valor de a ainda seja diferente de 1 (ou seja penúltima iteração)
            printf(", ");
        }        
    }

    //imprimindo os caracteres exigidos pela formatação exigida no runcodes, e imprimindo a variável contador
    printf(")\n");
    printf("%d", contador);

    return 0;
}
