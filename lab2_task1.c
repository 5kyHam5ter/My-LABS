#include <stdio.h>

#define GOOD_INPUT 1
#define INVEST_SUM 20.0
#define INTEREST_RATE 1.04

int input_check_def(int *input);
int delta_years_def(int year_of_invest, int actual_year);
double calculate_capital(double initial_sum, int years, double rate);

int main(void)
{
    int year_of_invest;
    int actual_year;

    printf("Enter your year of invest: ");
    if (!input_check_def(&year_of_invest))
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter actual year: ");
    if (!input_check_def(&actual_year))
    {
        printf("Invalid input\n");
        return 1;
    }

    int delta = delta_years_def(year_of_invest, actual_year);
    if (delta < 0)
    {
        printf("Actual year must be >= year of invest\n");
        return 1;
    }

    double capital = calculate_capital(INVEST_SUM, delta, INTEREST_RATE);

    printf("Years passed: %d\n", delta);
    printf("Capital today: %.2f dollars\n", capital);

    return 0;
}


int input_check_def(int *input)
{
    return (scanf("%d", input) == GOOD_INPUT);
}

int delta_years_def(int year_of_invest, int actual_year)
{
    return actual_year - year_of_invest;
}


double calculate_capital(double initial_sum, int years, double rate)
{
    double result = initial_sum;
    for (int i = 0; i < years; i++)
    {
        result *= rate;
    }
    return result;
}
