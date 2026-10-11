#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

void task1()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");

    double gr;
    double rad;
    double result;

    printf("Угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;
    result = sin(rad);
    printf("Синус угла %.2f градусов = %.6f\n", gr, result);

}

void task2()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");

    double x;
    double p = 3;
    double a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    b = p * x * x + sqrt(a);
    a = sqrt(p * x);
    y = pow(log(b * b), 3) + a * x;
    printf("При x = %.1f значение y = %.4f\n", x, y);
}




int main() {

    task1();
    task2();
    

    return 0;
}