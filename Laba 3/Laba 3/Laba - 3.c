#define _CRT_SECURE_NO_DEPRECATE

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define D 2.54
#define SPANISH_INCH 2.32166
#define LITHUANIAN_INCH 2.707

void task1()
{
    int num1, num2;

    printf("\n===== ЗАДАНИЕ 1 =====\n");

    printf("Введите число: ");
    if (scanf("%d", &num1) != 1)
    {
        printf("Ошибка ввода.\n");
        return;
    }

    printf("Введено число %d\n", num1);

    printf("Введите второе число: ");
    if (scanf("%d", &num2) != 1)
    {
        printf("Ошибка ввода.\n");
        return;
    }

    printf("Введено второе число %d\n", num2);

    printf("Сумма: %d\n", num1 + num2);
    printf("Разность: %d\n", num1 - num2);
    printf("Произведение: %d\n", num1 * num2);

    if (num1 != 0)
    {
        printf("Частное: %.2f\n", (double)num2 / num1);
        printf("Остаток: %d\n", num2 % num1);
    }
    else
    {
        printf("Деление на ноль невозможно.\n");
    }
}

void task2()
{
    double dym;

    printf("\n===== ЗАДАНИЕ 2 =====\n");

    printf("Введите количество дюймов: ");
    if (scanf("%lf", &dym) != 1 || dym < 0)
    {
        printf("Ошибка: введите неотрицательное число.\n");
        return;
    }

    printf("%.2f международных дюйма = %.2f см\n",
        dym, D * dym);

    printf("%.2f испанских дюйма = %.2f см\n",
        dym, SPANISH_INCH * dym);

    printf("%.2f литовских дюйма = %.2f см\n",
        dym, LITHUANIAN_INCH * dym);
}

void task3()
{
    float a, b;

    printf("\n===== ЗАДАНИЕ 3 =====\n");

    printf("Введите число a: ");
    if (scanf("%f", &a) != 1)
    {
        printf("Ошибка ввода.\n");
        return;
    }

    printf("Введите число b: ");
    if (scanf("%f", &b) != 1)
    {
        printf("Ошибка ввода.\n");
        return;
    }

    printf("\n");
    printf("+----------------------+------------+------------+\n");
    printf("| %-18s | %-10s | %-10s |\n",
        "a * b", "a + b", "a - b");
    printf("+----------------------+------------+------------+\n");

    printf("| %6.2f * %-6.2f     | %10.2f | %10.2f |\n",
        a, b, a + b, a - b);

    printf("+----------------------+------------+------------+\n");

    printf("| %18.2f | %10.2f | %10.2f |\n",
        a * b, a + b, a - b);

    printf("+----------------------+------------+------------+\n");
}

void taskdz()
{
    double m, h, F;
    const double g = 9.8;

    printf("\n===== ДОМАШНЕЕ ЗАДАНИЕ =====\n");

    printf("Введите массу тела (кг): ");
    if (scanf("%lf", &m) != 1 || m < 0)
    {
        printf("Ошибка: масса должна быть неотрицательной.\n");
        return;
    }

    printf("Введите высоту (м): ");
    if (scanf("%lf", &h) != 1 || h < 0)
    {
        printf("Ошибка: высота должна быть неотрицательной.\n");
        return;
    }

    F = m * g;

    printf("Сила тяжести: %.2f Н\n", F);
    printf("Потенциальная энергия: %.2f Дж\n", m * g * h);
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    task1();
    task2();
    task3();
    taskdz();

    system("pause");

    return 0;
}