


#include <stdlib.h>
#include <stdio.h>
int main () {
    char wowie [50];
    printf ("Name mo gago: ");
    fgets(wowie, sizeof(wowie), stdin);
    printf ("BlehBleh %s", wowie);

    return 0;
}