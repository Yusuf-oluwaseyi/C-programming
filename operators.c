#include <stdio.h>
/**
 * @brief - arithmetic operators in c.
 * + - addition.
 * - - subtraction.
 * / - division.
 * ++ - increment.
 * -- - decrements.
 * % - modulus.
 * 
 */

int main() {

    int x = 12;
    //addition
    int result = x + 22;
    printf("%d\n", result);

    // subtraction
    int y = 30;
    int axis = y - 10;
    printf("%d\n", axis);

    // same is done for all operators.
    // increments and decrements.
    /* there is a difference between ++x and x++,
    first is increased by 1 then return value, while other return the original value 
    and the increase or decrease.
    */

   int seat = 5;

   int seats = seat++;
   printf("There are %d lefts");

   /* Other operators are 
    * == - equal to
    * > - greater than
    * < - less than.
    * != - not equals to.
    * >= - greater than or equal to.
    * <= - less than or equals to.
    */

   int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}