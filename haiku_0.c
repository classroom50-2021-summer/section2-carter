#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

// Create the skeleton for check_haiku().
// First: What data type should it return?
// Second: What data type might its arguments be?

check_haiku()
{

}