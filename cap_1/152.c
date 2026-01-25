#include <stdio.h>

/* cuenta los caracteres de la entrada; 1a versión */ 
int
main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF) {
      ++nc;
    printf("%ld\n", nc);
  }
}
