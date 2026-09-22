#include <stdio.h>
#include <math.h>

int main() {
    double principle;
    double rate;
    int years;
    double interest;

    // Get input from the user
    printf("Enter principle: ");
    scanf("%lf", &principle);

    printf("Enter interest rate (e.g., 15 for 15%%): ");
    scanf("%lf", &rate);

    printf("Enter duration in years: ");
    scanf("%d", &years);

    // Calculate interest
    interest = principle * pow(1 + (rate / 100), years) - principle;

    // Display the result
    printf("Interest earned: $%.2f\n", interest);

    return 0;
}