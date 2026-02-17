/*
 * Assignment 1: Employee Salary Calculator
 *
 * Problem: Calculate employee gross salary from basic pay
 * Formula:
 *   DA  = 50% of basic
 *   HRA = 250% of basic
 *   Gross = Basic + DA + HRA
 *
 * Concepts: Variables, arithmetic operators, printf/scanf, float
 */

#include <stdio.h>

int main() {
    float basic, da, hra, gross;

    printf("\n=== Employee Salary Calculator ===\n");
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    /* Calculate allowances */
    da  = basic * 0.5;   /* 50% of basic  */
    hra = basic * 2.5;   /* 250% of basic */

    /* Calculate gross salary */
    gross = basic + da + hra;

    /* Display result */
    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary : Rs. %.2f\n", basic);
    printf("DA  (50%%)    : Rs. %.2f\n", da);
    printf("HRA (250%%)   : Rs. %.2f\n", hra);
    printf("------------------------\n");
    printf("Gross Salary : Rs. %.2f\n", gross);

    return 0;
}

/*
 * Sample Output:
 *
 * === Employee Salary Calculator ===
 * Enter basic salary: 10000
 *
 * --- Salary Breakdown ---
 * Basic Salary : Rs. 10000.00
 * DA  (50%)    : Rs. 5000.00
 * HRA (250%)   : Rs. 25000.00
 * ------------------------
 * Gross Salary : Rs. 40000.00
 */
