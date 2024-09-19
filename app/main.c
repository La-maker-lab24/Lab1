#include <stdio.h>
#include "myfunc.h"

int main()
{
    double a, b, c, x1 = 0.0, x2 = 0.0;
    printf("Введите коэффициенты уравнения (a, b, c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    int num_roots = solve(a, b, c, &x1, &x2);
    if (num_roots == 1) {
        printf("%lf\n", x1);
    } else if (num_roots == 2) {
        printf("%lf %lf\n", x1, x2);
    } else {
        printf("Нет решений\n");
    }
    return 0;
}