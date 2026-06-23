#include <stdio.h>
#include <stdlib.h>

typedef struct _data {
    int dia, mes, ano;
} data;

int datas (data data1, data data2) {
    if (data1.dia < data2.dia && data1.mes < data2.mes && data1.ano < data2.ano) {
        return 1;
    } else if (data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    data *ndatas, *ndatas_o;
    int n, pos = 0;

    scanf("%d", &n);

    ndatas = malloc(n*sizeof(data));
    ndatas_o = malloc(n*sizeof(data));

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &ndatas[i].dia, &ndatas[i].mes, &ndatas[i].ano);
    }

    for (int i = 0; i < n; i++) {
        pos = n;

        for (int j = 0; j < n; j++) {
            pos -= datas(ndatas[i], ndatas[j]);
        }

        ndatas_o[pos] = ndatas[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d %d %d", ndatas_o[i].dia, ndatas_o[i].mes, ndatas_o[i].ano);
    }

    return 0;
}