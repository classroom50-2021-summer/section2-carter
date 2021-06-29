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

        if (haiku[i] == '/')
        {
            line_count++;
        }
    }

    /*
    Now let's deal with this "return true" statement!
    If a haiku has three lines, write a condition to return true
    when line_count matches that condition, and false if otherwise!
    */
   
    return true;
}