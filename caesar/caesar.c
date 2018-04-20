
//your formula to shift a character by the key value seems interesting. I learnt something new.
//you could have nested the if condition of isalpha right above the if condition of isUpper and islower. This is just a suggestion.
//also instead of harcoding the values of 97 or 65 you can use 'A'or 'a' in lines 45 and 51.
//style looks good
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//By: Jabier Espinal 4-16-2018
int main(int argc, string argv[])
{

    string input; // string variable user input

    if (argc != 2) // specified number of arguments not 2
    {
        printf("Caesar would not approve what you typed in, do it again!!\n"); // prompt user to enter key
        return 1;
    }

    int key = atoi(argv[1]); // store user key number

    if (key < 0 || isalpha(*argv[1])) // if less then 0 or not a number print below message
    {
        printf("You know what you did wrong, Caesar would not approve\n");
        return 1;
    }

    else
    {

        input = get_string("plaintext: "); // Prompt user for input
        printf("ciphertext: ");
        char cipher;

        for (int i = 0, n = strlen(input); i < n; i++)  // checks for string length input
        {
            cipher = input[i];

            if islower(input[i])  // checks for lower case
            {
                cipher = (((input[i] + key) - 97) % 26) + 97;
            }

            if isupper(input[i]) // checks for uppercase

            {
                cipher = (((input[i] + key) - 65) % 26) + 65;
            }

            if (isalpha(input[i])) // checks for string values

            {
                input[i] = cipher;
            }

            else // just prints cipher

            {
                input[i] = cipher;
            }

            printf("%c", cipher);
        }

        printf("\n");
        return 0;

    }

}