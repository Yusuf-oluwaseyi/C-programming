#include <stdio.h>
/**
 * @brief - for loop.
 * In programming, a loop is used to repeat a block of code until the specified condition is met.
 * 
 */
int main() {

    //for (initializationExpression; testExpression; UpdateExpression){}
    /*int i;

    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);

    }
*/
    //Practical example.
    int sum = 0;

    for (int i = 0; i <= 100; i++) {
        sum = sum + i;
    }
    printf("%d ", sum);

    return 0;

}