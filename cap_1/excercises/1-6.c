#include <stdio.h>

/* Ejercicio 1-6. 
 * Verifique que la expresión `getchar() != EOF` 
 * es 0 o 1.*/

int 
main()
{
  int result = (getchar() != EOF);

  printf("%d\n", result);
}
