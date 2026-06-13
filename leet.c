// O erro no código era o "&" no primeiro scanf, porque v já é um ponteiro
// Acho que os casos teste do runcodes estão errados. Porque o padrão no leet é que os caracteres que não são
// substituídos por números sejam colocados em caixa alta, e no runcodes eles tão em caixa baixa. De qualquer
// jeito, eu comentei o default do break que faz os caracteres ficarem em caixa alta, pra passar nos casos teste

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 100

int main() {
    char *v;

    v = malloc(TAM * sizeof(char));

    scanf("%s", v);

    for (int i = 0; v[i] != '\0'; i++) {
        switch (tolower(v[i])) {
            case 'a':
                v[i] = '4';
                break;

            case 'e':
                v[i] = '3';
                break;

            case 'i':
                v[i] = '1';
                break;

            case 'o':
                v[i] = '0';
                break;

            /*default:
                v[i] = toupper(v[i]);
                break;*/
        }
    }

    printf("%s", v);

    return 0;
}