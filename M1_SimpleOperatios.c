#include <stdio.h>
#include <stdlib.h>
main () {
 int A = 10;
 int B = 20;
 int sum = A + B;
 int diff = A + B;
 int multi = A + B;
 int divide = A + B;
 int rem = A % B;

 float deci = (float)A / B; 
 printf ("Addition: %d\n", sum);
 printf ("Sub: %d\n", diff);
 printf ("Multi: %d\n", multi);
 printf ("Div(int): %d\n", divide);
 printf ("Rem: %d\n", rem);
 printf ("Div(Float): %.2f\n", deci);








}