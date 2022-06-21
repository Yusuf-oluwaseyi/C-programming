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
int* pc, c;
c = 5;
pc = &c;

// Here, 5 is assigned to the c variable. And, the address of c is assigned to the pc pointer.