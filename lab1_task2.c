#include <stdio.h>

int main() {
    int number;
    int result;
    int input_check;
    
    printf("Enter a number...");
    input_check = scanf("%d", &number);
    result = number % 2;
    if (input_check !=1)
    printf("Invalit input");
    else
        if (result == 0) 
        printf("\nNumber is chet!!");
        else 
        printf("\nOoops! Number is nechet");
    return(0);
    }
