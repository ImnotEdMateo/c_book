/* Ejercicio 1-14.
 * Escriba un programa que imprima el histograma de 
 * las frecuencias con que se presentan diferentes 
 * caracteres leídos a la entrada */

#include <stdio.h>

#define UNIT    "#"
#define ASCII   128

int
main()
{
  int c, i, j, state, maxFreq = 0; 
  int freq[ASCII];

  for (i = 0; i < ASCII; ++i)
    freq[i] = 0;

  while((c = getchar()) != EOF) {
    if ( c != ' ' && c != '\t' && c != '\n' ) {
      ++freq[c];
    }
  }

  for (i = 0; i <= ASCII; ++i) {
    if (maxFreq < freq[i])
      maxFreq = freq[i] + 1; 
  }

  printf("\n==HISTOGRAMA==\n\n");

  /* eje y */
  for ( i = maxFreq; i >= 1; --i ) {
    printf("%3.02d |", i);
    for ( j = 1; j <= ASCII; j++)
      if ( freq[j] > 0) {
        if ( freq[j] >= i )
          printf("%3s", UNIT);
        else 
          printf("%3s", "  ");
      }
    printf("\n");
  }

  /* eje x */
  printf("%5c-", '+');
  for ( i = 0; i <= ASCII; i++) {
    if ( freq[i] > 0) 
      printf("---");
  }

  printf("\n");

  printf("%5s", "F/C");

  for ( i = 1; i < ASCII; ++i ) {
    if ( freq[i] != 0) 
      printf("%3c", i);
  }
  printf("\n\n");
}
