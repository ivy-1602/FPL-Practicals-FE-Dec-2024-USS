/*
 * Assignment 2: Fibonacci Series
 *
 * Problem: Print Fibonacci series up to n terms
 * Series: 0, 1, 1, 2, 3, 5, 8, 13, 21 ...
 * Logic:  Each term = sum of previous two terms
 *
 * Concepts: for loop, temporary variable, pattern logic
 */

#include <stdio.h>

int main() {
    int i, n, a = 0, b = 1, temp;

    printf("\n=== Fibonacci Series ===\n");
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series: %d %d ", a, b);

    /* Generate terms from index 2 onwards */
    for (i = 2; i < n; i++) {
        temp = a + b;   /* Next term */
        printf("%d ", temp);
        a = b;          /* Shift forward */
        b = temp;
    }

    printf("\n");
    return 0;
}

/*
 * Sample Output:
 *
 * === Fibonacci Series ===
 * Enter number of terms: 8
 *
 * Fibonacci Series: 0 1 1 2 3 5 8 13
 *
 * How it works:
 * 0 + 1 = 1
 * 1 + 1 = 2
 * 1 + 2 = 3
 * 2 + 3 = 5  ... and so on
 */
