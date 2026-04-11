/*
O cerne da lógica do código é a seguinte: Um loop while roda sem condição de pararada até algum 
jogador ganhar. A cada interação ele verifica se as jogadas são válidas e se alguém ganhou

IMPORTANTE: O RUN CODES ESTÁ DANDO ERRO NOS CASOS 5, 6, 7 MESMO A SAÍDA DO MEU CÓDIGO ESTANDO CERTA!!!!!!!!!!!
*/

#include <stdio.h>

int main() {
    int qtde_inicial, jogada, turno, maior_jogada;
    scanf("%d", &qtde_inicial);

    //Verificando se a quantidade inserida é válida
    while (qtde_inicial <= 0) {
        printf("Erro: quantidade inicial invalida");
        return 1;
    }

    scanf("%d", &jogada);

    //Só iremos atribuir o valor da jogada atual a maior jogada se a jogada atual for maior que a anterior e menor que 4
    if (jogada <= 3) {
        maior_jogada = jogada;
    }

    //Esse loop roda até que algum jogador ganhe 
    while (1) {

        //Verifica se a jogada é válida
        if (jogada > qtde_inicial || jogada > 3 || jogada < 0) {
            printf("Erro: jogada invalida\n");
            scanf("%d", &jogada);
        } else if (qtde_inicial - jogada == 0) { //O valor inserido inicialmente (qtde_inicial) decresce. Se o valor chegar em zero, é porque alguém ganhou
            if (turno%2 == 0) {
                
                if (jogada > maior_jogada && jogada <= 3) {
                    maior_jogada = jogada;
                }
        
                printf("Vencedor: Jogador 2\n");
                printf("Maior retirada: %d", maior_jogada);
                return 0;
            } else if (turno%2 != 0) {

                if (jogada > maior_jogada && jogada <= 3) {
                    maior_jogada = jogada;
                }

                printf("Vencedor: Jogador 1\n");
                printf("Maior retirada: %d", maior_jogada);
                return 0;
            }
        } else { //O jogo continua se o valor inserido inicialmente não chegou em zero
            qtde_inicial -= jogada;
            turno++;

            if (jogada > maior_jogada && jogada <= 3) {
                maior_jogada = jogada;
            }

            scanf("%d", &jogada);
        }   
    }

    return 0;
}

//Erro: quantidade inicial invalida
//Erro: Jogada invalida
//Vencedor: Jogador X
//Maior retirada: X