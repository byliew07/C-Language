#include <stdio.h>

// Function to check if a number is prime
int isPrime(long long n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Factor found, not prime
        }
    }
    return 1; // Number is prime
}

int main(void) {
    int terms;

    printf("Please enter the number of terms:\n");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        return 0;
    }

    printf("\nAmong the first %d terms of Fibonacci series that are also prime numbers:\n", terms);

    long long first = 0, second = 1;

    for (int i = 1; i <= terms; i++) {
        long long current;
        if (i == 1) {
            current = 0;
        } else if (i == 2) {
            current = 1;
        } else {
            current = first + second;
            first = second;
            second = current;
        }

        // Print only if current term is prime
        if (isPrime(current)) {
            printf("%lld\n", current);
        }
    }

    return 0;
}