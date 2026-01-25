#include <stdio.h>

/* copia la entrada a la salida; 1a. versión*/
int
main()
{
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c); 
    c = getchar();
  }
}
