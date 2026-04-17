/*
Primeiro o usuário da um input com o tamanho do número que ele vai inserir. Depois, ele insere os números. Aí, pra descobrir se é palindromo, a ideia é criar um loop com um indice que vai crescendo pra obter o valor dos termos nas primeiras posições do array e um indice que vai decrescendo pra obter os valores na última posição do array. Então, comparamos os elementos nas primeiras e últimas posições do array, se todos eles forem iguais, o número é palindromo
*/

#include <stdio.h>

int main() {
    int valores[50]; //Array pra armazenar os números
    int tamanho, contador;
    
    scanf("%d", &tamanho); //Aqui o usuário insere o tamanho que vai ter o número
    contador = tamanho-1; //Essa variável "contador" vai ser usada pra ir decrescendo e varrendo os valores do array de trás pra frente, então ela incializa em tamanho-1, porque o index do array sempre termina 1 antes do tamanho total dele, afinal a primeira posição de todo array em C é 0
    
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]); //Usuário preenche o array
    }
    
    for (int i = 0; i < tamanho; i++) {
        if (valores[i] != valores[contador]) { //Aqui, a gente compara os elementos do indice crescente com os elementos do indice decrescente, ou seja, os primeiros com os ultimos termos. Se algum deles for diferente, o numero não é palindromo, então return 0 pra parar o programa
            printf("nao eh palindromo"); 
            return 0;
        }
        
        contador--; //Diminuimos o indice de contador né, claro, pra ele ir percorrendo os indices do array de tras pra frente
    }
    
    printf("eh palindromo"); //Se sairmos daquele loop for sem cair em nenhum caso que um elemento é diferente do outro, pronto, garantimos que é palindromo 
    
    return 0;
}
