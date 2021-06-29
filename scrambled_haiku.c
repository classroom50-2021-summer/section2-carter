// DOTO (DO TOgether!)

// Include the code packages we might use
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Write our main function
int main(void)
{   
    string haiku = get_string("Haiku: ");

    haiku = scramble_haiku(haiku);

    printf("%s", haiku);
}

scramble_haiku()
{
    
}