#define _CRT_SECURE_NO_DEPRECATE

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#define D 2.54

void task1()
{
    int num1, num2;

    printf("\n===== ЗАДАНИЕ 1 =====\n");

    puts("Введите число");
    scanf("%d", &num1);

    printf("Введено число %d\n", num1);

    puts("Введите второе число");
    scanf("%d", &num2);

    printf("Введено второе число %d\n", num2);

    printf("Сумма %d\n", num1 + num2);
    printf("Разность %d\n", num1 - num2);
    printf("Произведение %d\n", num1 * num2);

    if (num1 != 0)
    {
        printf("Частное %d\n", num2 / num1);
        printf("Остаток %d\n", num2 % num1);
    }
    else
    {
        printf("Деление на ноль невозможно\n");
    }
}


void task2()
{
    int dym;
    float result;

    printf("\n===== ЗАДАНИЕ 2 =====\n");

    printf("Введите количество дюймов: ");
    scanf("%d", &dym);

    result = D * dym;

    printf("%d дюймов - это %.2f см\n", dym, result);
}



void task3()
{
    float a, b;

    printf("\n===== ЗАДАНИЕ 3 =====\n");

    printf("Введите число a: ");
    scanf("%f", &a);

    printf("Введите число b: ");
    scanf("%f", &b);

    printf("\n");
    printf("+----------------------+------------+------------+\n");
    printf("| %-18s | %-10s | %-10s |\n", "a * b", "a + b", "a - b");
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

    printf("Введите массу тела (кг): ");
    scanf("%lf", &m);

    printf("Введите высоту (м): ");
    scanf("%lf", &h);

    F = m * g;

    printf("Сила тяжести: %.2f Н\n", F);

    return 0;
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