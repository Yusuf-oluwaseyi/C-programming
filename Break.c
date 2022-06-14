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
  /* for (int i = 1; i < 5; i++) {
    if (i == 3) {
        continue;
    }
    printf("%d is not 3\n", i);
   }

//    another example


    while (1)
    {
        int number;

        printf("Enter a number: \n");
        scanf("%d\n", &number);
        if (number <= 0) {
            break;
        }
        if ((number % 2) != 0) {
            continue;
        }
        printf("%d\n,", number);
    }
*/
    // adding sum of all positive integer and break if negative

       int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter n%d: ", i);
      scanf("%lf", &number);

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   
    

    return 0;

}
