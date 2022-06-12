#include <stdio.h>
/**
 * @brief - if, if else statements.
 * Return: no return.
 */
int main(){

    //if just printing one c or working with one
    //no need for {}
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are eligible to vote");
    }
    else {
        printf("Sorry my baby.");
    }

    return 0;
}