// Include the code packages we might use
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* 
Establish our main function, with two arguments:
argc: "ARGument Count", the number of arguments given at the terminal
argv[]: "ARGument Vector", an array where each entry contains those arguments
*/
int main(int argc, string argv[])
{   
    // Print argc
    printf("Argc is: %i \n", argc);

    // Go through every entry in argv, and print the value at that location.
    for (int i = 0; i < argc; i++)
    {
        printf("Argv[%i] is %s\n", i, argv[i]);
    }

    // Write code to check if we have one argument!

}