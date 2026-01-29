/* Ejercicio 1-4.
 * Escriba un programa que imprima la tabla
 * correspondiente Celsius a Fahrenheit. */

#include <stdio.h>

int
main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0; /* límite inferior de la tabla de temperaturas */ 
  upper = 300; /* límite superior */ 
  step = 20; /* tamaño del incremento */ 

  printf("%s\t%s\n", "Celsius", "Fahrenheit");

  celsius = lower;
  while ( celsius <= upper ) {
    fahr = (( 9.0 / 5.0 ) * ( celsius )) + 32.0;
    printf("%7.0f\t%10.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
