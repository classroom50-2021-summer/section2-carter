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
    int line_count = 0;

    for (int i = 0; i < strlen(haiku); i++)
    {
        printf("%c", haiku[i]);

        /* 
        Within this loop, check if each character in haiku is a '/'
        If so, increase line_count by 1
        */


    }

    return true;
}