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
int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p", &var);  
  return 0;
}