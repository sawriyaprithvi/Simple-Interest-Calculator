#include <stdio.h>

int main()
{
    int principal;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    int rate;
    printf("Enter the rate of interest (p.a): ");
    scanf("%d", &rate);

    int time;
    printf("Enter the time period: ");
    scanf("%d", &time);

    int simpleInterest = (principal * rate * time) / 100;
    printf("The simple interest is %d\n", simpleInterest);

    return 0;
}
