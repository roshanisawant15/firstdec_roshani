#include <stdio.h>

int main() {
    int n, i, temp, digit, sum, count;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        // Count number of digits
        count = 0;
        int x = i;
        while (x != 0) {
            count++;
            x /= 10;
        }

        // Nested loop to calculate sum of powers
        while (temp != 0) {
            digit = temp % 10;

            int power = 1;
            for (int j = 1; j <= count; j++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}