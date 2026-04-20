//Esse código é complicado. Ele é dividido em 4 principais partes: 
//================================================================================================================
//PRIMEIRA PARTE: Verficação de input. 
//Ali o código verifica se os valores inseridos estão dentro dos valores permitidos, se não foi inserida nenhuma carta repetida, etc
//a lógica pra verifica se uma carta repetida foi inserida é a mais complicada (mas ainda assim é simples): A gente cria um loop pra varrer todos os elementos do array de cartas
//e depois um outro loop dentro dele. Pra cada iteração do loop maior, a gente varre o array inteiro com o loop menor. Assim, pra cada elemento do array cartas[], a gente
//varre todos os elementos do array cartas[], pra buscar se tem um igual. Entendeu? Pra cada elemento do array, a gente varre o prórprio array buscando um elemento igual.
//================================================================================================================
//SEGUNDA PARTE: Calcular a manilha e criar um array de equivalências
//Nessa parte, a gente cria um array chamado ordem[] cuja ordem dos elementos é a ordem de força das cartas do truco, 3 > 2 > A > K > J > Q > 7 > 6 > 5 > 4, então por exemplo, nesse array 4 tem posição 9,
//porque é o valor de carta mais forte no truco, 5 tem valor 8, 6 tem valor 7, 7 tem valor 6, e por aí vai. Feito isso, através desse array, a gente consegue facilmente identificar a força de uma carta inserida
//Pra fazer isso, a gente varre o array da ordem[], buscando pelo valor inserido pelo usuário. Quando o loop encontra o valor inserido no array, ele retorna a posição daquele elemento no array, pra podermos
//saber qual a força da carta. Com esse array, também, podemos calcular facilmente a manilha, que é dada pela cara que vem depois da vira. Pra isso, a gente varre o array ordem[] em busca da vira, e quando
//a gente encontra ela, definimos que a manilha = elemento que vem depois do elemento no qual a vira está, logo [i+1]. Caso a vira seja 4, pra não dar erro pelo fato de o próximo index estar fora do tamanho 
//do array, a gente simplesmente define que se vira = 4 manilha = 3
//================================================================================================================
//TERCEIRA PARTE: Comparar o tamanho das cartas inseridas pra saber qual é a maior
//Criamos um loop para verficar qual o maior elemento do array de cartas, usando a lógica simples de criar uma variável pra armazenar o elemento inicial do array, e depois, caso o elemento seguinte seja maior 
//que o maior elemento atual, o maior elemento atual atualiza para ser o elemento i da lista. Porém, pra cada iteração, temos que converter da ordem simples das cartas pra ordem de força do truco, usando o array
//ordem[]. Fazemos uma busca no array ordem[] para obtermos a ordem do elemento atual no array ordem[] e assim descobrir a força da carta. Feito isso, o loop roda normal, e compara o elemento atual da lista 
//convertido na ordem do truco com o maior elemento atual. Se for maior, o maior elemento atual passa a ser o elemento atual da lista (o "i" da lista)
//================================================================================================================
//QUARTA PARTE: Converter o maior elemento de volta pra ordem do truco
//Convertemos de volta o maior elemento pra ordem do truco usando o array ordem[]. Feito, buscamos qual era o naipe da carta que é o maior elemento. Fazemos isso varrendo o array cartas com um loop, e quando ele 
//encontrar o valor da maior carta no array de cartas, ele pega a posição dele no array cartas[]. Feito isso, inserimos a posição no array naipes[] pra descobrir qual o naipe correspondente ao da carta.
//E FINALMENTE, PRINTAMOS A MAIOR CARTA E O NAIPE DA MAIOR CARTA. QUE EXERCÍCIO INFERNAL. MEU DEUS.

#include <stdio.h>

int main() {
    int cartas[4], naipes[4], ordem[10], manilha, carta_atual, naipe_maior;
    int carta_maior = 0;

    // ======== Verificações de Input ========

    for (int i = 0; i < 4; i++) { //Preenchendo o array
        scanf("%d", &cartas[i]);
        scanf("%d", &naipes[i]);

        if (cartas[i] > 7 && cartas[i] < 11) { //Verificamos se as cartas tem valores permitidos
            printf("Entrada invalida");
            return 0;
        } else if (cartas[i] > 13 || cartas[i] <= 0) {
            printf("Entrada invalida.");
            return 0;
        } else if (naipes[i] < 0 || naipes[i] > 3) {
            printf("Entrada invalida.");
            return 0;
        }
    }

    for (int i = 0; i < 3; i++) { //Verificamos se tem alguma carta repetida
        for (int j = i+1; j < 3; j++) {
            if (cartas[i] == cartas[j] && naipes[i] == naipes[j]) {
                printf("Entrada invalida.");
                return 0;
            }
    
        }
    }
    
    // ======== Cálculo Da Manilha ========

    //Atribuimos valores pras posições do array de conversão
    ordem[0] = 4;
    ordem[1] = 5;
    ordem[2] = 6;
    ordem[3] = 7;
    ordem[4] = 12;
    ordem[5] = 11;
    ordem[6] = 13;
    ordem[7] = 1;
    ordem[8] = 2;
    ordem[9] = 3;

    for (int i = 0; i < 10; i++) { //Definimos que a manilha é a carta na posição depois da vira
        if (cartas[3] == ordem[i] && i != 9) {
            manilha = ordem[i+1];
            break;
        } else if (i == 9) { //Se sair fora do index do array, a gente atribui o valor 4
            manilha = 4;
        }
    }

    printf("manilha %d", manilha);    

    // ======== Ordenação de Força ========

    for (int i = 0; i < 3; i++) { //Nesse loop a gente verifica se alguma das cartas inseridas é a manilha. Se alguma das cartas for, pronto, a gente imprime que ela é a carta mais forte e termina o programa
        if (cartas[i] == manilha && naipes[i] == naipes[3]) {
            printf("%d %d", cartas[i], naipes[i]);
            return 0;
        } 
    }

    carta_maior = 0; //Variável pra armazenar o maior elemento atual das cartas

    for (int i = 0; i < 3; i++) { //Esse loop converte o elemento atual da ordem do truco pra ordem de força, e depois compara se o elemento é maior ou menor que o maior elemento atual
        for (int j = 0; j < 10; j++) {
            if (cartas[i] == ordem[j]) {
                carta_atual = j;
                break; //ESSE BREAK É ESSENCIAL PRA NÃO DEIXAR A VERFICAÇÃO FICAR RODANDO SE O CÓDIGO JÁ TIVER ENCONTRADO O VALOR EQUIVALENTE
            }
        }

        if (carta_maior < carta_atual) { //Se a carta atual for maior que a maior carta atual, a maior carta atual passa a ser a carta atual
            carta_maior = carta_atual;
        }
    }

    //Converter o valor da carta maior da sequência crescente pra sequência do truco
    for (int i = 0; i < 10; i++) { //Aqui a gente volta o valor da ordem de força pra ordem do truco
        if (carta_maior == i) {
            carta_maior = ordem[i];
            break;
        }
    }

    for (int i = 0; i < 3; i++) { //Encontramos qual o naipe correspondente a maior carta
        if (carta_maior == cartas[i]) {
            naipe_maior = naipes[i];
        }
    }

    printf("%d %d", carta_maior, naipe_maior);

    return 0;
}
