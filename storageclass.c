#include <stdio.h>
/** 
 * storage class
 */


/*
Every variable in C programming has two properties: type and storage class.

Type refers to the data type of a variable. And, storage class determines the scope, visibility and lifetime of a variable.

There are 4 types of storage class:

    automatic
    external
    static
    register
*/

/*
Local Variable

The variables declared inside a block are automatic or local variables.
The local variables exist only inside the block in which it is declared.
*/
// The below code i isn't declared so you get an error
int main(void) {

    int i;
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming\n");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}

// by declaring i in the code it can the work.

