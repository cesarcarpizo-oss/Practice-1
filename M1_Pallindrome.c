//make a palindrome by giving a string and making it a palindrome
#include <stdio.h>
#include <string.h>
main () {
 char str[100];
 printf("Enter a set of characters: ");
 scanf("%s", str);
 //make a palindrome by reversinng the strig and adding it to the original
 char palidrome [200];
 //use simple code for this one
 int len = strlen(str);
    for (int i = 0; i < len; i++) {
        palidrome[i] = str[i];
    }
    for (int i = 0; i < len; i++) {
        palidrome[len + i] = str[len - 1 - i];  
        //add the null character at the end of the string
        palidrome[len + len] = '\0';
 //display the palindrome
    printf("The palindrome is: %s\n", palidrome);
    return 0;


}