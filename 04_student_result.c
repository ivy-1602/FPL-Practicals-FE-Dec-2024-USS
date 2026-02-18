/*
 * Assignment 4: Student Result System
 *
 * Problem: Take marks of 5 subjects, calculate
 *          total, percentage, and assign grade
 *
 * Subjects: Maths, English, Marathi, Hindi, Computer
 * Grading:
 *   >= 80  -> Grade A
 *   >= 70  -> Grade B
 *   >= 60  -> Grade C
 *   >= 50  -> Grade D
 *   >= 40  -> Grade E
 *    < 40  -> Fail
 *
 * Concepts: Multiple inputs, if-else chain, percentage calculation
 */

#include <stdio.h>

int main() {
    char name[20];
    int maths, english, sst, hindi, computer;
    int total;
    float per;

    printf("\n------------------\n");
    printf("  Student Result   \n");
    printf("------------------\n");

    printf("\nEnter student name   : ");
    scanf("%s", name);

    printf("Enter Maths marks    : ");
    scanf("%d", &maths);

    printf("Enter English marks  : ");
    scanf("%d", &english);

    printf("Enter Marathi marks  : ");
    scanf("%d", &sst);

    printf("Enter Hindi marks    : ");
    scanf("%d", &hindi);

    printf("Enter Computer marks : ");
    scanf("%d", &computer);

    /* Calculate total and percentage */
    total = maths + english + sst + hindi + computer;
    per   = (total / 500.0) * 100;   /* out of 500 */

    /* Display result */
    printf("\n===== Result Card =====\n");
    printf("Name       : %s\n", name);
    printf("Total      : %d / 500\n", total);
    printf("Percentage : %.2f%%\n", per);

    /* Assign grade */
    printf("Grade      : ");
    if (per >= 80)
        printf("A\n");
    else if (per >= 70)
        printf("B\n");
    else if (per >= 60)
        printf("C\n");
    else if (per >= 50)
        printf("D\n");
    else if (per >= 40)
        printf("E\n");
    else
        printf("Fail\n");

    printf("=======================\n");

    return 0;
}

/*
 * Sample Output:
 *
 * ------------------
 *   Student Result
 * ------------------
 *
 * Enter student name   : Uma
 * Enter Maths marks    : 88
 * Enter English marks  : 97
 * Enter SST marks  : 82
 * Enter Hindi marks    : 79
 * Enter Computer marks : 91
 *
 * ===== Result Card =====
 * Name       : Uma
 * Total      : 437 / 500
 * Percentage : 87.40%
 * Grade      : A
 * =======================
 */
