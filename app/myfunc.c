#include <math.h>
#include "myfunc.h"

int solve(double a, double b, double c, double* x1, double* x2)
{
    // ax^2 + bx + c = 0
    double D;
    // bx + c = 0
    // bx = -c

    if (a == 0)
    {
	if (b == 0)
	{
            if (c == 0) return -1; // Бесконечное количество решений
            return 0; // Нет решений
        }
	*x1 = -c / b;
        return 1;
    }

    D = b * b - 4 * a * c;
    if (D < 0) return 0;
    else if (D == 0)
    {
        *x1 = -b / a;
        return 1;
    }
    else
    {
        *x1 = (-b + sqrt(D)) / (-a);
        *x2 = (-b - sqrt(D)) / (-a);
        return 2;
    }
}