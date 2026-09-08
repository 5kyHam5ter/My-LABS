#include <stdio.h>

int main() {
    float radius;
    float square;
    float volume;
    int input_check;
    
    printf("Enter a radius... ");
    input_check = scanf("%f", &radius);
    square = 4*radius*radius*3.14;
    volume = 3.14*radius*radius*radius*4/3;
    if (input_check != 1)
    printf("Invalid input.");
    else
    printf("Square equals: %9.2f\t Volume equals: %9.2f", square, volume); 
    return(0);
    }
