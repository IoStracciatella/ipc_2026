//O código anterior estava incorreto pois o mesmo não considerava a nossa posição na fila, então ele considerava uma posição
//a menos do que deveria, fazendo o código imprimir uma mensagem errada. Agora, como somamos 1 ao valor da varável pessoas_na_frente,
//consertamos o problema. Também implementamos a estrutura condicional switch ao invés do if else no código original.

//NOTA ADICIONAL: Um outro méotodo que eu tinha usado pra resolver esse problema do cálculo errado da posição na fila era trocar a ordem
//dos prints. Porque o código errado interpretava erroneamente o resto da divisão. Se o resto da divisão fosse zero, é porque a posição
//fila é exatamente 5. Logo, ele deveria printar "Sinto muito! Voce nao ganhou nada...". Em um upload anterior eu anexei um código que
//usa essa lógica

#include <stdio.h>

int main(){
  int pessoas_na_frente, minha_pos;

  scanf("%d", &pessoas_na_frente);

  minha_pos = (pessoas_na_frente + 1) % 5;

    switch (minha_pos) {

    case 0:
        printf("Parabens! Voce ganhou um vale-vip");
        break;
    case 1:
        printf("Sinto muito! Voce nao ganhou nada...");
        break;
    case 2:
        printf("Parabens! Voce ganhou uma foto");
        break;
    case 3:
        printf("Parabens! Voce ganhou uma lembrancinha");
        break;
    case 4:
        printf("Parabens! Voce ganhou um cupom");
        break;
    }

  return 0;
}