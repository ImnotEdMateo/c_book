#include <stdio.h>

/* Ejercicio 1-8.
 * Escriba un programa que cuente
 * espacios en blanco, tabuladores y
 * nuevas lineas */

int
main()
{
  int c, spaces, tabs, newlines;

  spaces = 0;
  tabs = 0;
  newlines = 0;

  while((c = getchar()) != EOF) {
    if (c == ' ') {
      ++spaces;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == '\n') {
      ++newlines;
    }
  }
  
  printf("\n\nESPACIOS: %d\nTABULACIONES: %d\nNUEVAS LINEAS: %d\n\n", spaces, tabs, newlines);
}
