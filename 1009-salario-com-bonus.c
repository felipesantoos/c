#include <stdio.h>

int main()
{
    char nome[200];
    double sal_fixo, total_vendas, total_receber;

    scanf("%s", nome);
    scanf("%lf%lf", &sal_fixo, &total_vendas);

    total_receber = sal_fixo + ((total_vendas * 15) / 100);

    printf("TOTAL = R$ %.2lf\n", total_receber);

    return 0;
}
