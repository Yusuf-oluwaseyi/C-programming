#include <stdio.h>
/**
 * @brief - break and continue statement.
 * The break is used to stop/break a loop.
 * continue -
 * 
 */
int main () {

    // with for loop
    for (i = 0; i <= 10; i++) {
        if (i == 3) {
            break;
        }
        printf("Your number is %d\n", i);

    }

    return 0;

}