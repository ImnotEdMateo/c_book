#include <stdio.h>

/* Ejercicio 1-10.
 * Escriba un programa que copie su entrada a la salida. reemplazando:
 *
 * - cada tabulación por \t
 * - cada retroceso por \b 
 * - cada diagonal invertida por \\ 
 *
 * Esto hace que las tabulaciones y los espacios sean 
 * visibles sin confusiones*/

int
main()
{
  char c; 

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        putchar('\\');
        putchar('t');
        break;
      case '\b':
        putchar('\\');
        putchar('b');
        break;
      case '\\':
        putchar('\\');
        putchar('\\');
        break;
      default:
        putchar(c);
        break;
    }
  }
}

