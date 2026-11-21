#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: n must be a positive integer.\n");
        return 1;
    }

    double x = 0.2;
    double S = 1;
    double term = 1;
    long long operations = 0;

    operations += 3;

    operations++;
    for (int i = 1; i <= n; i++) {
        operations++;

        term = term * (((double)(n - i + 1) / i) * x);
        operations += 6;

        S += term;
        operations += 2;

        operations += 2;
    }
    operations++;

    printf("Result: %.7f\n", S);
    printf("Operations: %lld\n", operations);

    return 0;
}
