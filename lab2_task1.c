#include <stdio.h>

#define GOOD_INPUT 1
#define INVEST_SUM 20

int input_check_def(int *input);
int delta_years_def(int year_of_invest, int actual_year);

int main(void)
{
    int year_of_invest;
    int actual_year;

    printf("Enter your year of invest... ");
    if (!input_check_def(&year_of_invest))
        return 1;

    printf("Enter actual year... ");
    if (!input_check_def(&actual_year))
        return 1;

    int delta = delta_years_def(year_of_invest, actual_year);
    if (delta < 0)
    {
        printf("Actual year must be >= year of invest\n");
        return 1;
    }

    double capital = INVEST_SUM;
    for (int i = 0; i < delta; i++)
        capital *= 1.04;

    printf("Years passed: %d\n", delta);
    printf("Capital today: %.2f dollars\n", capital);
    return 0;
}

int input_check_def(int *input)
{
    if (scanf("%d", input) != GOOD_INPUT)
    {
        printf("Invalid input\n");
        return 0;
    }
    printf("INPUT OK\n");
    return 1;
}

int delta_years_def(int year_of_invest, int actual_year)
{
    return actual_year - year_of_invest;
}
