#include <stdio.h>

int main() {

    double freq, res, dur;

    double resultado = 0;

    scanf("%lf %lf %lf", &freq, &res, &dur);

    resultado = freq * res * dur;
    resultado = resultado/8;

    printf("O audio tem %.2lf bytes", resultado);

    return 0;
}
