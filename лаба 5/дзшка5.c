#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");

    double x, y, z;
    double v1, v2, v;

   
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);
    printf("Введите z: ");
    scanf("%lf", &z);

   
    double numerator = 1.0 + sin(x + y) * sin(x + y);
    double denominator = fabs(x - 2.0 * y / (1.0 + x * x * y * y));
    double power = pow(x, fabs(y));

    v1 = (numerator / denominator) * power;

    
    double angle = atan(1.0 / z);
    v2 = cos(angle) * cos(angle);

   
    v = v1 + v2;

    // Вывод
    printf("\nРезультаты:\n");
    printf("Исходные данные:\n");
    printf("  x = %.4lf\n", x);
    printf("  y = %.4lf\n", y);
    printf("  z = %.4lf\n", z);
    printf("Промежуточные значения:\n");
    printf("  sin(x+y)     = %.6lf\n", sin(x + y));
    printf("  1 + sin^2    = %.6lf\n", numerator);
    printf("  знаменатель  = %.6lf\n", denominator);
    printf("  x^|y|        = %.6lf\n", power);
    printf("  v1 (часть 1) = %.6lf\n", v1);
    printf("  v2 (часть 2) = %.6lf\n", v2);
    printf("Ответ:\n");
    printf("  v = %.4lf\n", v);

    return 0;
}
