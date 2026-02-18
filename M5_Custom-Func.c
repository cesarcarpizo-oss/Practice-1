//Create a function that returns the factorial of n. 
// for example factorial(5); //120

#include <stdio.h>
#include <stdlib.h>
// later use int i = n and "while"
int FACTORIAL (int n){
    int i = n;
    int RESULT = 1;
    while (i > 1) {
    RESULT *= i;
    i --;

    }
    //return result
    return RESULT;
    }
    int main () {
    int N; 
    printf("Enter a number to get it's factorial: ");
    scanf("%d", &N);
    //call the function andd display the result
    printf("The factorial of %d is: %d\n", N, FACTORIAL(N));  
    //done
    return 0;
    //N is udefined in the function, so we need to pass it as a parameter
    //add invalid input for negative numbers
    if (N < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
     //done
     return 1;
    

    }
    //add invalid for letters
        if (scanf("%d", &N) != 1) {
            printf("Invalid input. Please enter a non-negative integer.\n");
            return 1;
    }