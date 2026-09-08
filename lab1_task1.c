#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    int input_check_a;
    int input_check_b;
    int input_check_c;
    float res_ab;
    float res_bc;
    float res_ac;
    int cnt = 0;
    
    printf("Enter number A... ");
    input_check_a = scanf("%f", &a);
    printf("%d", input_check_a);

    if (input_check_a !=1) {
    printf("Invalid input");
    return 0;
    } 
        else
        printf("Enter number B... ");
        input_check_b = scanf("%f", &b);

            if (input_check_b !=1) {
                printf("Invalid input");
                return 0;
        }
            else
            printf("Enter number C... ");
            input_check_c = scanf("%f", &c);
                if (input_check_c !=1) {
                    printf("\nInvalid input");
                    return 0;
            }
                else
                    printf("");   
    res_ab = a*b;
    if (res_ab==1)
    cnt++;
    else
    printf("");
    
    res_bc = b*c;
    if (res_bc==1)
    cnt++;
    else
    printf("");
    
    res_ac = a*c;
    if (res_ac==1)
    cnt++;
    else
    printf("");

printf("\nNumber of pairs is... %d", cnt);
return(0);
}
