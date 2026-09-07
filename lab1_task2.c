#include <stdio.h>

int main() {
    int number;
    int result;
    
    printf("Enter a number...");
    scanf("%d", &number);
    
    result = number % 2;
    
    printf("result = %d, so...", result);
    
    if (result == 0) 
    printf("\nNumber is chet!!");
    else 
    printf("\nOoops! Number is nechet");
    
    return(0);
    }
