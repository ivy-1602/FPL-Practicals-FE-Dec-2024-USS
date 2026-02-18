/*
 * Assignment 5: String Operations
 *
 * Problem: Perform string operations:
 *   - Find length    (strlen)
 *   - Reverse string (strrev)
 *   - Check palindrome
 *   - Compare strings (strcmp)
 *
 * Concepts: string.h library, character arrays, loops for palindrome
 * Note: strrev() works on Turbo C / Windows (old compiler)
 *       On Linux/GCC, reverse logic is written manually below
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str1[100] = "Hello";
    char rev[100];
    int length, i, flag = 0, result;

    printf("\n------------------\n");
    printf(" String Functions \n");
    printf("------------------\n");

    printf("\nEnter a string: ");
    scanf("%s", str);

    /* 1. Length */
    length = strlen(str);
    printf("\n--- Length ---\n");
    printf("Length of \"%s\" = %d\n", str, length);

    /* 2. Reverse */
    for (i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    rev[length] = '\0';

    printf("\n--- Reverse ---\n");
    printf("Original : %s\n", str);
    printf("Reversed : %s\n", rev);

    /* 3. Palindrome check */
    printf("\n--- Palindrome ---\n");
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("\"%s\" is a palindrome\n", str);
    else
        printf("\"%s\" is NOT a palindrome\n", str);

    /* 4. String comparison */
    printf("\n--- String Comparison ---\n");
    result = strcmp(str, str1);

    printf("Comparing \"%s\" with \"%s\":\n", str, str1);
    if (result == 0)
        printf("Both strings are equal\n");
    else if (result < 0)
        printf("\"%s\" is less than \"%s\"\n", str, str1);
    else
        printf("\"%s\" is greater than \"%s\"\n", str, str1);

    return 0;
}

/*
 * Sample Output 1 (palindrome input):
 *
 * Enter a string: madam
 *
 * --- Length ---
 * Length of "madam" = 5
 *
 * --- Reverse ---
 * Original : madam
 * Reversed : madam
 *
 * --- Palindrome ---
 * "madam" is a palindrome
 *
 * --- String Comparison ---
 * Comparing "madam" with "Hello":
 * "madam" is greater than "Hello"
 *
 * Sample Output 2 (non-palindrome):
 *
 * Enter a string: hello
 * "hello" is NOT a palindrome
 */
