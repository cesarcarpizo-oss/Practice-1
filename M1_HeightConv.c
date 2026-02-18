#include <stdio.h>
#include <stdlib.h>

main() {
 float cm;
 float totalinch;
 int feet;
 float reminch;
 printf ("Input Remaining Value: ");
 scanf ("%f", &cm);

 totalinch = cm/2.54;
 feet = (int)totalinch / 12;
 reminch = totalinch - (feet * 12);

 printf ("%.1f centimeters is %d feet %.1f inches\n", cm, feet, reminch);
 








    return 0;
}