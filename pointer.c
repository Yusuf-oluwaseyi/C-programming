#include <stdio.h>
/**
 * @brief - Pointers in c.
 * 
 * 
 */
// Address in c
/*If you have a variable var in your program, &var will give you its address in the memory.

We have used address numerous times while using the scanf() function.
*/
/*int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p", &var);  
  return 0;
}
*/

// C pointers.
/*
Pointers (pointer variables) are special variables that are used to store addresses rather than values.

pointer syntax
*/
int *p;
int* p;
int *p1, *p2;

// Assigning addresses to pointers.
int *pc, c;
c = 5;
pc = &c;

// Here, 5 is assigned to the c variable. And, the address of c is assigned to the pc pointer.

// Get Value of Thing Pointed by Pointers

To get the value of the thing pointed by the pointers, we use the * operator. For example:

int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5

Here, the address of c is assigned to the pc pointer. To get the value stored in that address, we used *pc.

Note: In the above example, pc is a pointer, not *pc. You cannot and should not do something like *pc = &c;

By the way, * is called the dereference operator (when working with pointers). 
It operates on a pointer and gives the value stored in that pointer.


Changing Value Pointed by Pointers

Let's take an example.

int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Ouptut: 1

We have assigned the address of c to the pc pointer.

Then, we changed the value of c to 1. Since pc and the address of c is the same, *pc gives us 1.

Let's take another example.

int* pc, c;
c = 5;
pc = &c;
*pc = 1;
printf("%d", *pc);  // Ouptut: 1
printf("%d", c);    // Output: 1

We have assigned the address of c to the pc pointer.

Then, we changed *pc to 1 using *pc = 1;. Since pc and the address of c is the same, c will be equal to 1.

Let's take one more example.

int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15

Initially, the address of c is assigned to the pc pointer using pc = &c;. Since c is 5, *pc gives us 5.

Then, the address of d is assigned to the pc pointer using pc = &d;. Since d is -15, *pc gives us -15.
