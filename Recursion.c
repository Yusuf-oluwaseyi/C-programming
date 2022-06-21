#include <stdio.h>
/**
 * @brief Recursion - It's a function that calls itself
 * Usually used with if...else statement.
 * 
 */
/* Example -
void recurse() {

    recurse();
}

int main() {
    recurse();

    return 0;
}

This gives an infinite recurse loop.
*/

// Example of recurse

int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); 
    else
        return n;
}