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
/*int main(void) {

    // int i;
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming\n");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}
*/
// by declaring i in the code it can the work.

// Global varialbe.
/*
Variables that are declared outside of all functions are known as external or global variables.
They are accessible from any function inside the program.
*/

/*void display();

int n = 5;  // global variable

int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d", n);
}
*/

Register Variable

The register keyword is used to declare register variables. 
Register variables were supposed to be faster than local variables.

However, modern compilers are very good at code optimization, 
and there is a rare chance that using register variables will make your program faster.

Unless you are working on embedded systems where you know how to optimize code for the given application, 
there is no use of register variables.

static variable 
The value of a static variable persists until the end of the program.
It is used by using th static keyword.