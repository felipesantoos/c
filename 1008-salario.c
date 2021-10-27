#include <stdio.h>

int main()
{
    int num_func, horas_trab;
    float valor_hora, salario;
    scanf("%d%d%f", &num_func, &horas_trab, &valor_hora);

    salario = horas_trab * valor_hora;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_func, salario);

    return 0;
}
