#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: n must be a positive integer.\n");
        return 1;
    }

    double x = 0.2;
    double S = 0;
    long long operations = 0;

    operations += 2;

    operations++;
    for (int i = 0; i <= n; i++) {
        operations++;

        double term = 1;
        operations++;

        operations++;
        for (int k = 1; k <= i; k++) {
            operations++;

            term = term * (((double)(n - k + 1) / k) * x);
            operations += 6;

            operations += 2;
        }
        operations++;

        S += term;
        operations += 2;

        operations += 2;
    }
    operations++;

    printf("Result: %.7f\n", S);
    printf("Operations: %lld\n", operations);

    return 0;
}
