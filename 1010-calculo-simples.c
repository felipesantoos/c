#include <stdio.h>

int main()
{
    int cod_1, num_1;
    float preco_1;
    int cod_2, num_2;
    float preco_2;

    scanf("%d%d%f", &cod_1, &num_1, &preco_1);
    scanf("%d%d%f", &cod_2, &num_2, &preco_2);

    float total = num_1 * preco_1 + num_2 * preco_2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
