#include <stdio.h>
/**
 * @brief - Function in c.
 * Use descriptive name for function.
 * 
 * 
 */
// syntax
/* returnType functionName () {


}
*/

//    using void when it brings no return.
   /*void greet() {
    printf("Good Evening Techies!");
   }

   int main() {

    greet();

    return 0;
   }
   */

//   Return value
int addNumbers (int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {

    int result = addNumbers(7,10);
    printf("The Result = %d", result);

    return 0;
}