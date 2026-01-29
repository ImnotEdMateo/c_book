/* Ejercicio 1-12.
 * Escriba un progama que imprima 
 * su entrada una palabra por linea */

#include <stdio.h>

#define IN  1 
#define OUT 0

int
main()
{
  int c, state;
 
  state = OUT;
  while( (c = getchar()) != EOF ) {
    if ( c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }  
    } else {
      state = IN;
      putchar(c);
    }
  }
}

