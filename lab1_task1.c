#include <stdio.h>

int main() {
    float radius;
    float square;
    float volume;
    
    printf("Enter a radius... ");
    scanf("%f", &radius);
    
    square = 4*radius*radius*3.14;
    printf("Square equals: %9.2f\n", square);
    
    volume = 3.14*radius*radius*radius*4/3;
    printf("Volume equals: %9.2f\n", volume);
    
    return(0);
    }
