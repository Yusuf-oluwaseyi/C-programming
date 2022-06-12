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

    //logical operators.
    /*&&
				Logical AND. True only if all operands are true
				If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
		
      ||
				Logical OR. True only if either one operand is true
				If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
		
      !
				Logical NOT. True only if the operand is 0
				If c = 5 then, expression !(c==5) equals to 0.
    */

   int ade = 5, kunle = 5, ayo = 10;

    int fee = (ade == kunle) && (ayo > kunle);
    printf("(ade == kunle) && (ayo > kunle) is %d \n", fee);

    /*result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);
    */
//comma operator and bitwise operators.

    //&. <<, >>, ~, ^, |.
    //the comma link related operations together.

    //sizeof operatiors.
    int l;

    printf("size of l = %lu bytes\n", sizeof(l));

    return 0;
}