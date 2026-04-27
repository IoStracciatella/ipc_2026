/*
A lógica desse código é a seguinte: A gente cria uma variável para receber o tamanho da matriz, e em seguida o usuário preenche
a matriz com valores. Em seguida, temos um loop que varre valores da matriz em uma área quadrada, definida pelo tamanho da 
matriz que o usuário inseriu. ou seja, a cada iteração o loop varre uma submatriz da matriz maior, e o tamanho dessa sunmatriz 
vai diminuindo a cada iteração. na primeira iteração desse loop, ele varre todos os valores da matriz, na segunda, ele varre
n - 1, na terceira n -3 e por assim em diante. porém, conforme o tamanho dessas submatrizes diminui, temos uma maior quantidade 
de submatrizes possíveis, porque, por exemplo, em uma matriz 3x3 a possibilidade de submatrizes 3x3 é 1, claro, afinal a 
submatriz é a própria matriz. agora, as possibilidades de submattrizes 2x2 (incluindo a diagonal principal) são 2 matrizes. se
reduzirmos para submatrizes 1x1 temos 3. então, não basta encolher o tamanho da matriz submatriz a cada iteração e verificar
quanto vale a soma de todos os elementos dela, é preciso fazer isso para TODAS as submatrizes de cada ordem. para isso, criei 
uma variável contador, que vai sendo incrementada a cada iteração do loop, ou seja, a medida que o tamanho das submatrizes 
diminui, a possibilidade de posições (definidas pela variável contador) aumenta, então nós temos que testar a posição das 
submatrizes em cada posição. conforme o valor de contador aumenta, ele é somado no valor do índice das submatrizes, o que faz
ela irem sendo deslocadas para frente. por fim, para cada iteraeção desse loop, somamos o valor de todos os elementos de cada 
submatriz criada, e se o valor da soma dos elementos da submatriz atual for maior que o maior valor de soma de todos os 
elementos de submatriz, substituimos o maior valor pelo valor atual. Para podermos armazenar qual submatriz era a maior
submatriz, é simples, a gente guarda os valores do loop que delimitaram os índices da subamtriz, na iteração em que a soma dos
elementos da mesma foi calculada. assim não precisamos criar uma nova matriz, só guardamos os valores que delimitam a maior
submatriz na matriz grande
*/

#include <stdio.h>

int main() {
    int matriz[50][50], limite1, limite2, soma_atual, maior_soma, dimensoes, contador;
    
    soma_atual = 0;
    maior_soma = 0;
    contador = 0;
    
    scanf("%d", &dimensoes);

    if (dimensoes <= 0) {
        printf("Entrada invalida.");
        return 0;
    }

    for (int i = 0; i < dimensoes; i ++) { //Preenchendo os valores
        for (int j = 0; j < dimensoes; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = dimensoes; i > 0; i--) { //Esse for aqui vai reduzindo o "criando" submatrizes pra cada iteração, e diminuindo o tamanho das submatrizes para cada iteração
        contador++;

        for (int qtde = 0; qtde <= contador; qtde++) { //Esse for aqui tem 2 utilidades: deslocar as submatrizes e aumentar a quantidade de submatrizes criadas a medida que o tamanho das submatrizes diminui
            for (int j = qtde; j < i+qtde; j++) { //Esse for i e j aninhado serve só pra somar todos os valores das submatrizes
                for (int k = qtde; k < i+qtde; k++) {
                    soma_atual += matriz[j][k];
                }
            }
            if (soma_atual > maior_soma) { //Se a soma dos elementos da submatriz atual for maior que o maior valor registrado da soma dos elementos de submatriz, o maior valor é atualizado como o valor atual
                maior_soma = soma_atual;
                limite1 = qtde; //Aqui armazenamos os valores que delimitam a maior submatriz pra poder imprimir ela depois
                limite2 = i+qtde;
            }
            soma_atual = 0; //Temos que resetar o valor da soma atual para cada iteração porque né, se não ele vai representar o valor da soma de todas as submatrizes
        }
    }

    printf("Soma: %d\n", maior_soma);

    for (int i = limite1; i < limite2; i++) { //Imprimindo a maior submatriz usando os valores que delimitam ela na matriz grande
        for (int j = limite1; j < limite2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}