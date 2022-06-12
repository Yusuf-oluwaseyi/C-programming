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
    printf("Your grade is %c\n", grade);

    /*Taking multiple values*/

    double height;
    char letter;

    printf("Enter your values: \n");
    scanf("%lf, %c", &height, &letter);

    printf("Your height is %lf \n", height);
    printf("\nYour letter is %c", letter);

    return 0;
}