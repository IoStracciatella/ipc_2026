/*
A lógica é a seguinte: Eu criei um array grande pra poder armazenar a maior sequência de zeros e uns dos casos testes (daria pra usar malloc mas como a gente ainda não viu
em aula melhor deixar quieto). Aí, o usuário vai fornecer uma sequência de zeros e uns do tamanho que ele escolher. Depois a gente verfica essa sequência
*/

#include <stdio.h>

int main() {
    int carga[20];
    int tamanho;
    int qtde_de_1;
    scanf("%d", &tamanho);

    //Tem que ser maior que zero senão, né, não faz sentido
    if (tamanho <= 0) {
        printf("Tamanho invalido.");
        return 1;
    } 

    //Aqui a gente atribui os valores pra cada posição do array usando o input do usuário e verifica se o input foi 1 ou 0. Aqui a gente já vai contando quantos números 1 
    //o usuário colocou
    for (int i = 0; i < tamanho+1; i++) {
        scanf("%d", &carga[i]);

        if (carga[i] == 1) {
            qtde_de_1++;
        }
    }

    //Aqui a gente verifica se a quantidade total de 1 na sequência é par ou impar. Se for par, sabemos que tá errado então print quadro corrompido. Se for ímpar, certo, printa a carga
    if (qtde_de_1 % 2 == 0) {
        printf("Quadro corrompido.");
    } else if (qtde_de_1 % 2 == 1) {
        printf("Carga util: ");
        
        //Pra printar a carga eu usei um loop for que varre todos os valores do array
        for (int i = 0; i < tamanho; i++) {
                printf("%d ", carga[i]);
        }
    }

    return 0;
}
