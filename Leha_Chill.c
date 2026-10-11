#include <stdio.h>

#define BAD_INPUT 0
#define GOOD_INPUT 1

int check_input(int input);
int main(void)
{
    int module_option, submodule_option;
    printf("Enter a number!");
    int check_input(int module_option);

    return 0;
}

int check_input(int input)
{
    if (scanf_s(&input) != 1)
    {
        printf("Некорректный ввод! Попробуйте еще раз!\n");
        while (getchar() != '\n');
        return BAD_INPUT;
    }
    return GOOD_INPUT;
}

int main_menu()
{
    while (1)
    {
        printf("\nМеню\n");
        printf("1 - Список лабораторных работ\n");
        printf("2 - Техническое задание на лабораторные работы\n");
        printf("3 - Получить ссылку на репозиторий\n");
        printf("0 - Выход\n");
        printf("Выберите опцию: ");
    }
}

int list_of_labs_menu()
{
    while(1)
    {
        void lab1_code();
        void lab2_code();
        void lab3_code();
        void lab4_code();
        void lab5_code();
        void lab6_code();
    }
}

void lab1_code()
{
    printf("Код лабораторной работы номер 1\n");
}
void lab2_code()
{
    printf("Код лабораторной работы номер 2\n");
}
void lab3_code()
{
    printf("Код лабораторной работы номер 3\n");
}
void lab4_code()
{
    printf("Код лабораторной работы номер 4\n");
}
void lab5_code()
{
    printf("Код лабораторной работы номер 5\n");
}
void lab6_code()
{
    printf("Код лабораторной работы номер 6\n");
}