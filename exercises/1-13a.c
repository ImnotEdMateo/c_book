/* Ejercicio 1-13.
 * Escriba un programa que imprima el histograma
 * de las longitudes de as palabras de su entrada 
 * Es fácil dibujar el histograma con las barras
 * horizontales; la orientación vertical es un reto 
 * más interesante. */

#include <stdio.h>

#define MAX_LEN    11
#define IN         1
#define OUT        0
#define UNIT       "#"


int
main()
{
  int c, i, j, wlen, state, maxFreq = 0;
  int nchars[MAX_LEN];

  /* Limpiar arreglo si alguna palabra excede el límite de caracteres*/
  wlen = 0;
  for (i = 0; i < MAX_LEN; ++i) {
    nchars[i] = 0;
  }
 
  /* Filtrar palabras */
  state = OUT;
  while((c = getchar()) != EOF) {
    if ( c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == ';') {
      if (state == IN) {
        if ( wlen > 0 && wlen < MAX_LEN ) 
          ++nchars[wlen];
        wlen = 0;
        state = OUT;
      }
    } else {
      if ( state == OUT )
        state = IN; 
      ++wlen; 
    }
  }

  /* Determinar la frecuencia máxima */
  for (i = 0; i <= MAX_LEN; ++i) {
    if (maxFreq < nchars[i])
      maxFreq = nchars[i] + 1;
  }

  /* IMPRIMIR EL HISTOGRAMA*/
  printf("\n==HISTOGRAMA==\n\n");

  /* eje y */
  for ( i = maxFreq; i >= 1; --i ) {
    printf("%3.02d |", i);
    for ( j = 1; j <= MAX_LEN; j++)
      if ( nchars[j] >= i )
        printf("%2s%s", UNIT, UNIT);
      else 
        printf("%3s", "--");
    printf("\n");
  }

  /* eje x */
  printf("%5c-", '+');
  for ( i = 0; i <= MAX_LEN; i++)
    printf("---");
  printf("\n");

  printf("%5s", "F/L");

  for ( i = 1; i < MAX_LEN; ++i )
    printf("%3.02d", i);
  printf("\n\n");
}
