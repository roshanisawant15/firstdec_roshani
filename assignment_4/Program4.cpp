#include <stdio.h>

int main() {
    int n, i, temp, digit, sum, fact, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        // Find each digit
        while (temp != 0) {
            digit = temp % 10;
            fact = 1;

            // Nested loop to calculate factorial
            for (j = 1; j <= digit; j++) {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}