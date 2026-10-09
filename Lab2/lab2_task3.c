//Даны положительные числа A и B (A > B). 
//На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). 
//Не используя операции умножения и деления, найти количество отрезков B, размещенных на отрезке A.

// +1 штраф;

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int cnt = 0;

    printf("Enter a: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Error: a is not an integer\n");
        return 0;
    }

    printf("Enter b: ");
    if (scanf("%d", &b) != 1)
    {
        printf("Error: b is not an integer\n");
        return 0;
    }

    if (b == 0)
    {
        printf("Error: b cannot be zero\n");
        return 0;
    }

    if (a < b)
    {
        printf("Quantity of lines...0\n");
        return 0;
    }

    for (int i = 1; a >= b; i++)
    {
        a -= b;
        cnt = i;
    }

    printf("Quantity of lines...%d\n", cnt);
    return 0;
}
