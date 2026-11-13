/* Practical work 7, task 7.5, variant 25: primality, recursion and iteration. */
#include <stdio.h>
#include <stdbool.h>

static bool prime_recursive_check(unsigned long long n, unsigned long long divisor) {
    if (divisor > n / divisor) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return prime_recursive_check(n, divisor + 1);
}

static bool is_prime_recursive(unsigned long long n) {
    if (n < 2) {
        return false;
    }
    return prime_recursive_check(n, 2);
}

static bool is_prime_iterative(unsigned long long n) {
    unsigned long long divisor;
    if (n < 2) {
        return false;
    }
    for (divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    long long number;
    bool recursive_result, iterative_result;
    printf("Enter an integer (recommended: 0 to 1000000): ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input.\n");
        return 0;
    }
    if (number < 2) {
        recursive_result = false;
        iterative_result = false;
    } else {
        /* Large inputs can exhaust the call stack in the recursive version. */
        if (number > 1000000) {
            printf("Please enter a number no greater than 1000000 for safe recursion.\n");
            return 0;
        }
        recursive_result = is_prime_recursive((unsigned long long)number);
        iterative_result = is_prime_iterative((unsigned long long)number);
    }
    printf("Recursive: %s\n", recursive_result ? "prime" : "not prime");
    printf("Iterative: %s\n", iterative_result ? "prime" : "not prime");
    /* Recursion is expressive but uses stack space; iteration usually uses less memory. */
    return 0;
}
