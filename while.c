#include <stdio.h>
/**
 * @brief - while and do while loop.
 * The difference explained.
 * Return: no return.
 * 
 */
int main() {
    // while (condition) {
        // statement inside while
    // }
    // infinite loop
    /* while (1 < 5) {
        printf("While loop is c\n")
    }
    return 0;
    */

//    finite loop
    /*int count = 1;

    while (count < 5) {
        printf("While loop is c\n");
        printf("count = %d\n", count);
        count = count + 1;
    }
    */
//    Multiplication table
   /* int number;

    printf("Enter your number: \n");
    scanf("%d", &number);

    int count = 1;

    while (count <= 12) {
        int product = number * count;
        // printf("%d\n", product);
        printf("%d * %d = %d\n", number, count, product);
        count = count + 1;
    }
    */

   // Do while loop
   //syntax do {
    // body of loop
// } while (condition);
//    }
    // until the condition is false body of loop continue to loop.

    int count = 1;
    do {
        printf("%d\n", count);
        count = count + 1;
    } while (count < 5);
    


    return 0;
}
