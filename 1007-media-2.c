#include <stdio.h>

int main()
{
    double A, B, C, MEDIA;
    scanf("%lf", &A); // 2
    scanf("%lf", &B); // 3
    scanf("%lf", &C); // 5
    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
