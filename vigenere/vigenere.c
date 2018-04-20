//style looks good
// technique used to add key and then bringing back to range (a-z or A-Z) can probably be improved by
// first doing a mod 26 and adding a or A to the result
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//By: Jabier Espinal 4-16-2018
// Vigenere.c
int main(int argc, string argv[])
{

    // string input; // string variable user input

    if (argc != 2) // specified number of arguments not 2
    {
        printf("Error: Please provide keyword\n"); // prompt user to enter key
        return 1;
    }

    string keyword = argv[1]; // store user key word

    for (int i = 0; i < strlen(keyword); i++) // if not a keyword alphabetic reject keyword
    {
        if (!isalpha(keyword[i]))
        {
            printf("Error: Keyword must only contain alpha characters\n");
            return 1;
        }
    }

    string input = get_string("plaintext: "); // Prompt user for input

    int j = 0; // variable j to



    for (int i = 0; i < strlen(input); i++)  // goes through user provided string converting alpha characters
    {
        if (isalpha(input[i])) // ciphers only alpha charectors
        {
            int vigenere = j % strlen(keyword);

            if (islower(input[i]))  // lower case
            {
                keyword[vigenere] = tolower(keyword[vigenere]);

                if (input[i] + ((keyword[vigenere]) - 'a') > 'z')
                {
                    input[i] = ('a' - 1) + ((input[i] + (keyword[vigenere] - 'a')) % 'z');
                }

                else
                {
                    input[i] += (keyword[vigenere] - 'a');
                }
            }

            else
            {
                keyword[vigenere] = toupper(keyword[vigenere]);

                if (input[i] + (keyword[vigenere] - 'A') > 'Z')
                {
                    input[i] = ('A' - 1) + ((input[i] + (keyword[vigenere] - 'A')) % 'Z');
                }

                else
                {
                    input[i] += (keyword[vigenere] - 'A');
                }
            }
            j++;
        }
    }
    printf("ciphertext: %s\n", input);
}