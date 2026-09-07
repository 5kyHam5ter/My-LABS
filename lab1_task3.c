#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float res_ab;
    float res_bc;
    float res_ac;
    int cnt = 0;
    
    printf("Enter number A... ");
    scanf("%f", &a);
    printf("Enter number B... ");
    scanf("%f", &b);
    printf("Enter number C... ");
    scanf("%f", &c);
    
    res_ab = a*b;
    res_bc = b*c;
    res_ac = a*c;

    if (res_ab==1)
    cnt++;
    else
    printf("");
    if (res_bc==1)
    cnt++;
    else
    printf("");
    if (res_ac==1)
    cnt++;
    else
    printf("");
    printf("Number of pairs is... %d", cnt);
    
    return(0);
    }
