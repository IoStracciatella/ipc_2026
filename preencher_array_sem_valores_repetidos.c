/*
Nesse exemplo, o usuário vai fornecer primeiro fornecer um valor dizendo quantas cartas um baralho tem, então por exemplo se ele colocar 50, quer dizer
que o baralho tem cartas que vão de 1 até 50. E depois, o usuário vai inserir uma sequencia de valores pra definir a posição das cartas. Então por
exemplo se ele inseriu primeiro o valor 5 é porque o baralho tem 5 cartas. Aí logo em seguida ele vai inserir a sequencia em que essas cartas estão,
exemplo 5, 2, 1, 3, 4. Mas perceba uma coisa, pra esse código funcionar, o usuário não pode inserir dois valores iguais, por exemplo 5, 5, 2, 2, 1 
afinal um baralho não tem cartas repetidas. Fazemos assim então, criamos um array, e um algoritmo que não aceita que insira valore repetidos nesse
array. Pra isso, a gente cria um loop for comum pra preencher arrays, que vai de 0 até o tamanho do array (que no caso desse código é definido por qtde_cartas)
pra cada iteração ele pega um input usando scanf e insere no array. Dentro desse loop for tem um outro for que pra cada valor inserido, ou seja, pra cada iteração
do for anterior, ele vai varrer todos os valores do array buscando se um elemento igual já estava presente no array. Se um valor igual já estiver presente,
fazemos o loop for anterior voltar em 1 iteração, pra aquele valor poder ser descartado e sobrescrito
*/

#include <stdio.h>

int main () {
    int qtde_cartas;
    int cartas[50];

    scanf("%d", &qtde_cartas);

    if (qtde_cartas > 50 || qtde_cartas <= 0) {
        printf("insira um valor entre 1 e 50");
        return 1;
    }

    for (int i = 0; i < qtde_cartas; i++) { //Eu vou chamar esse loop de loop i. Ele vai pegar inputs do usuário pra preencher todas as posições o array cartas[]
        scanf("%d", &cartas[i]);

        for (int j = i-1; j >= 0; j--) { //Vou chamar esse loop de loop j. Pra cada iteração do outro loop i, esse loop j vai varrer todos os valores do array cartas[] pra verificar se o valor inserido já havia sido jogado
            if (cartas[i] == cartas[j]) { //j assume todos os valores do array cartas[] e assim, ele verifica se algum desses valores é igual ao valor i inserido pelo usuário
                printf("carta ja jogada\n");
                i--; //Essa sacada do i-- é pra que, caso o usuário insiro um valor que já estava inserido no array cartas[], o loop i volta 1 iteração e pede novamente um valor, pra que aquele valor repetido seja descartado e substituído por um novo
                break;
            }
        }

        if (cartas[i] <= 0 || cartas[i] > qtde_cartas) { //Aqui a gente verifica se o valor que o usuário inseriu é valido, ou seja, se o valor inserido é uma carta que está inclusa no tamanho de baralho inserido
            printf("insira um valor valido (entre 1 e %d)\n", qtde_cartas);
            i--;
        }
    }

}