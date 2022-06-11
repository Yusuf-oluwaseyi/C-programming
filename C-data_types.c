#include <stdio.h>

/**
 * @brief - Data types in C language.
 * Return: no return.
 * 
 */
int main() {

    int age = 21;

    printf("%d", age);

    double number = 34.5;
    printf("\n%lf", number);

    float cars = 25.4;
    printf("\n%.2f", cars);

    printf("\nPrint size of double = %zu", sizeof (number));

    short a;
    long b;
    long long c;
    long double d;
    unsigned int e;
    signed char f;

    printf("\nPrint size of short = %hd", sizeof (a));
    printf("\nPrint size of long = %hd", sizeof (b));
    printf("\nPrint size of long long = %hd", sizeof (c));
    printf("\nPrint size of unsigned int = %hd", sizeof (e));
    printf("\nPrint size of long double = %hd", sizeof (d));
    printf("\nPrint size of signed char = %hd", sizeof (f));

    return 0;
}