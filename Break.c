#include <stdio.h>
/**
 * @brief - break and continue statement.
 * The break is used to stop/break a loop.
 * continue -
 * 
 */
int main () {

    // with for loop
   /* int i;

    for (i = 2; i <= 10; i++) {
        // if (i == 3) {
        //     break;
        // }
        printf("Your number is %d\n", i);
        break;

    }*/

    // for while loop

   /* while(1) {
        // printing positive and negative integer
         int number;
        printf("Enter a number: \n");
        scanf("%d", &number);

         if (number < 0) {
             break;
         }
        printf("%d\n", number);
    }
    */

   // continue
   for (int i = 1; i < 5; i++) {
    if (i == 3) {
        continue;
    }
    printf("%d is not 3\n", i);
   }
    

    return 0;

}