#include <stdio.h>

/**
 * @brief - input/output
 * displaying output scanf & printf.
 * Return: return.
 * 
 */
int main() {

    int age = 

    printf("Please enter your desired age: \n");

    scanf("%d", &age);

    printf("You are %d year old\n", age);

    double number;
    char grade;

    printf("Enter double number: \n");
    scanf("%lf", &number);


    printf("What is your grade: \n");
    scanf("\n%c", &grade);


    printf("Your double number is %lf\n", number);
    printf("Your garde is %c", grade);


    return 0;
}