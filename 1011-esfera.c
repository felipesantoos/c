#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    double r, v;
    
    scanf("%lf", &r);

    v = (4.0/3.0) * PI * r * r * r;

    printf("VOLUME = %.3lf\n", v);

    return 0;
}
