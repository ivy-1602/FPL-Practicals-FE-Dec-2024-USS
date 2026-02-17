/*
 * Assignment 3: Mathematical Operations
 *
 * Three programs in one:
 *   (i)  Square of a number
 *   (ii) Square root, square, and cube
 *   (iii) Factorial of a number
 *
 * Concepts: math.h library, for loop, integer vs float
 * Compile:  gcc 03_math_operations.c -o math -lm
 * Note: -lm flag needed to link math library
 */

#include <stdio.h>
#include <math.h>

/* (i) Square */
void square() {
    int x, y;
    printf("\n--- Square of a Number ---\n");
    printf("Enter a number: ");
    scanf("%d", &x);
    y = x * x;
    printf("Square of %d is %d\n", x, y);
}

/* (ii) Square root, square, cube */
void squareRootAndMore() {
    int n, sq, cube;
    float sqRoot;

    printf("\n--- Square Root, Square & Cube ---\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    sqRoot = sqrt(n);     /* from math.h */
    sq     = n * n;
    cube   = n * n * n;

    printf("Square Root : %.2f\n", sqRoot);
    printf("Square      : %d\n",   sq);
    printf("Cube        : %d\n",   cube);
}

/* (iii) Factorial */
void factorial() {
    int i, n, fact = 1;

    printf("\n--- Factorial ---\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %d\n", n, fact);
}

int main() {
    int choice;

    printf("\n=== Math Operations ===\n");
    printf("1. Square\n");
    printf("2. Square root, square, cube\n");
    printf("3. Factorial\n");
    printf("4. All three\n");
    printf("Choose (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: square();           break;
        case 2: squareRootAndMore(); break;
        case 3: factorial();         break;
        case 4:
            square();
            squareRootAndMore();
            factorial();
            break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}

/*
 * Sample Output:
 *
 * --- Square of a Number ---
 * Enter a number: 6
 * Square of 6 is 36
 *
 * --- Square Root, Square & Cube ---
 * Enter a number: 9
 * Square Root : 3.00
 * Square      : 81
 * Cube        : 729
 *
 * --- Factorial ---
 * Enter a number: 5
 * Factorial of 5 = 120
 * (5 x 4 x 3 x 2 x 1 = 120)
 */
