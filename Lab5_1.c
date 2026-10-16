#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


double task1(double gr);
int task2_4(double x);
double taskdz(double x, double y, double z);


int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");

    double gr;
    double x;
    double y;
    double z;
    double result;


    printf("\n===== ЗАДАНИЕ 1 =====\n");

    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    result = task1(gr);

    printf("Результат: sin(%.0f град) = %.6f\n",
        gr, result);


    printf("\n===== ЗАДАНИЕ 2-4 =====\n");

    printf("Введите x: ");
    scanf("%lf", &x);

    task2_4(x);


    printf("\n===== ДОМАШНЕЕ ЗАДАНИЕ =====\n");

    double x, y, z, result;

    printf("--- Вычисление функции taskdz ---\n");

    printf("Введите значение x: ");
    scanf("%lf", &x);

    
    printf("Введите значение y: ");
    scanf("%lf", &y);

   
    printf("Введите значение z: ");
    scanf("%lf", &z);

    result = taskdz(x, y, z);

   
    printf("\nРезультат вычислений:\n");
    printf("w = %.4lf\n", result);

    return 0;
}


double task1(double gr)
{
    double rad;
    double result;

    rad = gr * M_PI / 180.0;
    result = sin(rad);

    return result;
}


int task2_4(double x)
{
    const double t = -6.0;

    double a;
    double b;
    double y;

    int A;
    int B;
    int C;

    int cond_a;
    int cond_b;

    a = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);

    printf("x = %.1f, y = %.4f\n", x, y);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    cond_a = ((A % 2 == 0) + (B % 2 == 0) == 1);

    cond_b = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);

    printf("Условие выполнено (1 - да, 0 - нет):\n");
    printf("а) только одно из A и B чётное: %d\n", cond_a);
    printf("б) A, B, C кратны 3: %d\n", cond_b);
}


double taskdz(double x, double y, double z)
{
    double base;
    double exponent;
    double series;
    double w;

    base = fabs(cos(x) - cos(y));

    exponent = 1.0 + 2.0 * sin(y) * sin(y);

    series = 1.0
        + z
        + (z * z) / 2.0
        + (z * z * z) / 3.0
        + (z * z * z * z) / 4.0;

    w = pow(base, exponent) * series;

    return w;
}