/* Ejercicio 1-3. 
 * Modifique el  programa de conversión de 
 * temperaturass de modo que escriba un 
 * encabezado sobre la tabla. */

#include <stdio.h>

int
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* límite inferior de la tabla de temperaturas */ 
  upper = 300; /* límite superior */ 
  step = 20; /* tamaño del incremento */ 

  printf("%s\t%s\n", "Fahrenheit", "Celsius");

  fahr = lower;
  while (fahr <= upper) {
    celsius = ( 5.0 / 9.0) * ( fahr - 32.0 );
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
