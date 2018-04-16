#include <stdio.h> // contains printf() , stdin function
#include <cs50.h>
#include <string.h> // contains the strLen() function
#include <ctype.h> // contains the toupper() function

int main(void)
{
    string name = get_string(); // stores user input - cs50 does not like prompt " "what is your name? :"

    for (int index = 0; index < strlen(name); index++)  //iterate through name to find valid initials
    {
        //if letter is in the first index or is preceded by a space
        if (index == 0 || name[index - 1] == 32)   // 32 = ascii chractor " "
        {
            printf("%c", toupper(name[index])); //print only initials in Capitals output
        }
    }
    printf("\n"); //print next line
}