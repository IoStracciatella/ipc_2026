#include <stdio.h>

int main() {
    int paginas, capitulos;
    double tempo_medio, minutos_dia;

    scanf("%d %d %lf %lf", &paginas, &capitulos, &tempo_medio, &minutos_dia);

    double paginas_por_dia = minutos_dia/tempo_medio;
    double qtde_dias = paginas/paginas_por_dia;

    double capitulos_por_dia = (double)capitulos/paginas;
    capitulos_por_dia = paginas_por_dia * capitulos_por_dia;

    printf("Tempo para terminar: %.2lf dias\n", qtde_dias);
    printf("Paginas por dia: %.2lf\n", paginas_por_dia);
    printf("Capitulos por dia: %.2lf", capitulos_por_dia);

    return 0;
}
