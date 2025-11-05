# Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n - 1; i += 2) {
        sum += i;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}
