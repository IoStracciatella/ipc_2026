#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2;
    double delta = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

     if (a == 0) {
        printf("nao eh uma equacao do segundo grau");
        return 0;
    }

    delta = (b*b) - 4*a*c;

    if (delta > 0) {

        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);

        printf("x1 = %.5lf\nx2 = %.5lf", x1, x2);

    } else if (delta == 0) {

         x1 = -b/(2 * a);
        printf("existe apenas um valor x = %.5lf que satisfaz a equacao", x1);

    } else if (delta < 0) {

        printf("nao existe x real que satisfaca a equacao");

    }

    return 0;
}
