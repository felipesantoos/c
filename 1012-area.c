#include <stdio.h>

int main()
{
    double A, B, C;
    double tr, c, t, q, r;
    const double PI = 3.14159;

    scanf("%lf%lf%lf", &A, &B, &C);

    tr = (A * C) / 2;
    c = PI * C * C;
    t = (A + B) * C / 2;
    q = B * B;
    r = A * B;

    printf("TRIANGULO: %.3lf\n", tr);
    printf("CIRCULO: %.3lf\n", c);
    printf("TRAPEZIO: %.3lf\n", t);
    printf("QUADRADO: %.3lf\n", q);
    printf("RETANGULO: %.3lf\n", r);

    return 0;
}
