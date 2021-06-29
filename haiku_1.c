// Include the code packages we might use
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Declare any helping functions we'll use
bool check_haiku(string haiku);

// Write our main function
int main(void)
{   
    string haiku = get_string("Haiku: ");

    if (check_haiku(haiku))
    {
        printf("It's maybe a haiku!");
    }
    else
    {
        printf("It's not a haiku");
    }
}

bool check_haiku(string haiku)
{
    /* 
    Remember that a string is actually an array of characters;
    haiku[0] is the first character, haiku[1] is the second, and so on.
    Write a loop to print out every character in the variable haiku, and
    afterwards, return true to the main function!
    */
   
}