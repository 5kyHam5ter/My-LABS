#include <stdio.h>

int main(void)
{
    int module_option, submodule_option;

    printf("Добро пожаловать в лабораторные работы!\n");

    while (1)
    {
        printf("\nМеню\n");
        printf("1 - Список лабораторных работ\n");
        printf("2 - Техническое задание на лабораторные работы\n");
        printf("3 - Получить ссылку на репозиторий\n");
        printf("0 - Выход\n");
        printf("Выберите опцию: ");
        scanf("%d", &module_option);

        switch (module_option)
        {
        case 0:
            printf("Завершение программы. До свидания!\n");
            return 0;

        case 1:
            while (1)
            {
                printf("\nСписок лабораторных работ\n");
                printf("1 - Лабораторная работа №1\n");
                printf("2 - Лабораторная работа №2\n");
                printf("3 - Лабораторная работа №3\n");
                printf("4 - Лабораторная работа №4\n");
                printf("0 - Назад\n");
                printf("Выберите опцию: ");
                scanf("%d", &submodule_option);

                if (submodule_option == 0)
                    break;

                switch (submodule_option)
                {
                case 1:
                    printf("запуск ЛР №1\n");
                    break;
                case 2:
                    printf("запуск ЛР №2\n");
                    break;
                case 3:
                    printf("[запуск ЛР №3]\n");
                    break;
                case 4:
                    printf("[запуск ЛР №4]\n");
                    break;
                default:
                    printf("некорректный ввод\n");
                    break;
                }
            }
            break;

        case 2:
            while (1)
            {
                printf("\nТЗ на лабораторные работы\n");
                printf("1 - Открыть .txt\n");
                printf("2 - Показать текстом в cmd\n");
                printf("0 - Назад\n");
                printf("Выберите опцию: ");
                scanf("%d", &submodule_option);

                if (submodule_option == 0)
                    break;

                switch (submodule_option)
                {
                case 1:
                    printf("[открытие .txt с ТЗ]\n");
                    break;
                case 2:
                    printf("[вывод ТЗ текстом в cmd]\n");
                    break;
                default:
                    printf("некорректный ввод\n");
                    break;
                }
            }
            break;

        case 3:
            while (1)
            {
                printf("\nСсылка на репозиторий\n");
                printf("1 - Открыть .txt\n");
                printf("2 - Показать текстом в cmd\n");
                printf("0 - Назад\n");
                printf("Выберите опцию: ");
                scanf("%d", &submodule_option);

                if (submodule_option == 0)
                    break;

                switch (submodule_option)
                {
                case 1:
                    printf("[открытие .txt со ссылкой]\n");
                    break;
                case 2:
                    printf("[вывод ссылки на репозиторий]\n");
                    break;
                default:
                    printf("некорректный ввод\n");
                    break;
                }
            }
            break;

        default:
            printf("некорректный ввод\n");
            break;
        }
    }

    return 0;
}