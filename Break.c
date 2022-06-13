#include <stdio.h>
/**
 * @brief - break and continue statement.
 * The break is used to stop/break a loop.
 * continue -
 * 
 */
int main () {

    // with for loop
    int i;

    for (i = 2; i <= 10; i++) {
        // if (i == 3) {
        //     break;
        // }
        printf("Your number is %d\n", i);
        break;

    }

    return 0;

}