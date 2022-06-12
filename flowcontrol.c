#include <stdio.h>
/**
 * @brief - if, if else statements.
 * Return: no return.
 */
int main(){

    //if just printing one c or working with one
    //no need for {}
    /*int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are eligible to vote");
    }
    else {
        printf("Sorry my baby.");
    }
*/
    //if, else if, else statement.

    int age;

    printf("Please enter your age: \n");
    scanf("%d", &age);

    if (age > 150){
        //if (age > 150 || age < 0)
        printf("Invalid age to vote");
    }
    else if (age < 0){
        printf("Invalid age to vote");
    }
    else if (age >= 18) {
        printf("You are eligible to vote");
    }
    else {
        printf("Sorry baby");
    }

    return 0;
}