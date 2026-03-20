// Programa que le dois numeros e
// faz a operacao escolhida pelo(a)
// usuario(a). Elas podem ser soma,
// subtracao, multiplicacao ou divisao.

// Roteiro:
//
// Menu:
// 1. Adicao (mais)
// 2. Subtracao (menos)
// 3. Multiplicacao (vezes)
// 4. Divisao (dividir)
//
// 1. Criar 4 variaveis (1 para a operacao,
//    2 para os numeros e 1 para o resultado).
// 2. Perguntar qual operacao quer fazer.
// 3. Ler a operacao digitada (seguindo o menu
//    acima) e armazenar em uma variavel.
// 4. Pedir para digitar 2 numeros.
// 5. Ler os numeros digitados e armazenar nas
//    variaveis.
// 6. Verificar qual operacao foi escolhida e
//    fazer a operacao.
// 7. Mostrar o resultado da operacao.

#include <stdio.h>

int main() {

  // 1. Criar 4 variaveis (1 para a operacao,
  //    2 para os numeros e 1 para o resultado).
  int operacao;
  float num1, num2, resultado;
  
  // 2. Perguntar qual operacao quer fazer.
  printf("Digite o numero correspondente a operacao que voce quer fazer:\n");
  printf("1. Adicao (mais)\n2. Subtracao (menos)\n3. Multiplicacao (vezes)\n4. Divisao (dividir)\n");
  
  // 3. Ler a operacao digitada (seguindo o menu
  //    acima) e armazenar em uma variavel.
  scanf("%d", &operacao);

  // Verifica se a operacao eh invalida
  if (operacao < 1 || operacao > 4) {
    printf("Operacao invalida, booo\n");
  }
  // Se for valida, continua...
  else {  
    // 4. Pedir para digitar 2 numeros.
    printf("Digite os 2 numeros para fazer a operacao escolhida: ");
    
    // 5. Ler os numeros digitados e armazenar nas
    //    variaveis.
    scanf("%f %f", &num1, &num2);
    
    // 6. Verificar qual operacao foi escolhida e
    //    fazer a operacao.
    // 7. Mostrar o resultado da operacao.
    
    // Adicao
    if (operacao == 1) {
      resultado = num1 + num2;
      printf("%f + %f = %f\n", num1, num2, resultado);
    }
    else {
      // Subtracao
      if (operacao == 2) {
	resultado = num1 - num2;
	printf("%f - %f = %f\n", num1, num2, resultado);
      }
      else {
	// Multiplicacao
	if (operacao == 3) {
	  resultado = num1 * num2;
	  printf("%f * %f = %f\n", num1, num2, resultado);
	}
	else {
	  // Divisao, porque operacao eh 4. Neste caso,
	  // verifica se nao esta tentando dividir por 0.
	  if (num2 != 0) {
	    resultado = num1 / num2;
	    printf("%f / %f = %f\n", num1, num2, resultado);
	  }
	  else {
	    printf("Nao da pra dividir por 0!\n");
	  }
	}
      }
    }
  }
  
  return(0);
}