/* Ejercicio 1-15.
 * Escriba de nuevo el programa de conversión de 
 * temperatura la sección 1.2, de modo que use 
 * una función para la conversión. */

#include <stdio.h>

#define LOWER 0 
#define UPPER 300 
#define STEP  20 

float convertCel(float x);

int
main()
{
  float fahr;

  printf("%s\t%s\n", "Fahrenheit", "Celsius");
  for ( fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
    printf("%10.0f\t%7.1f\n", fahr, convertCel(fahr));

  return 0;
}

float 
convertCel(float x)
{
  float celsius;

  celsius = ( 5.0 / 9.0 ) * ( x - 32.0 );

  return celsius;
}
